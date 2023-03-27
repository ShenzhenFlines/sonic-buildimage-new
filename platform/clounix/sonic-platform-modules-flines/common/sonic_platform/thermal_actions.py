import os
import sys
import time
import syslog

from sonic_platform_base.sonic_thermal_control.thermal_action_base import ThermalPolicyActionBase
from sonic_platform_base.sonic_thermal_control.thermal_json_object import thermal_json_object
from sonic_py_common import logger
from .thermal_infos import *
# from sonic_platform.fault import Fault
from .helper import APIHelper
from .fan import Fan

SYSLOG_IDENTIFIER = 'thermalctld'
helper_logger = logger.Logger(SYSLOG_IDENTIFIER)

PLATFORM_CAUSE_DIR = "/host/reboot-cause/platform"

THERMAL_OVERLOAD_POSITION_FILE = "/usr/share/sonic/platform/api_files/reboot-cause/platform/thermal_overload_position"


@thermal_json_object('thermal_control.control')
class ControlThermalAlgoAction(ThermalPolicyActionBase):
    """
    Action to control the thermal control algorithm
    """
    # JSON field definition
    JSON_FIELD_STATUS = 'status'

    def __init__(self):
        self.status = True

    def load_from_json(self, json_obj):
        """
        Construct ControlThermalAlgoAction via JSON. JSON example:
            {
                "type": "thermal_control.control"
                "status": "true"
            }
        :param json_obj: A JSON object representing a ControlThermalAlgoAction action.
        :return:
        """
        if ControlThermalAlgoAction.JSON_FIELD_STATUS in json_obj:
            status_str = json_obj[ControlThermalAlgoAction.JSON_FIELD_STATUS].lower(
            )
            if status_str == 'true':
                self.status = True
            elif status_str == 'false':
                self.status = False
            else:
                raise ValueError('Invalid {} field value, please specify true of false'.
                                 format(ControlThermalAlgoAction.JSON_FIELD_STATUS))
        else:
            raise ValueError('ControlThermalAlgoAction '
                             'missing mandatory field {} in JSON policy file'.
                             format(ControlThermalAlgoAction.JSON_FIELD_STATUS))

    def execute(self, dict):
        """
        Disable thermal control algorithm
        :param thermal_info_dict: A dictionary stores all thermal information.
        :return:
        """
        ztime = time.strftime('%F %T', time.localtime())
        print('--------{0} policy: thermal_control.control'.format(ztime))
        # dict['fan_info'] is FanInfo type
        chassis = dict['chassis_info'].get_chassis()
        print('drawer count: {0}'.format(chassis.get_num_fan_drawers()))
        fan_info = dict['fan_info']
        # fan_info = FanInfo()
        fan_info.collect(chassis)
        fans = fan_info.fans.values()
        faults = fan_info.get_absence_fans()
        print('total count: {0}, faults count: {1}'.format(len(fans),len(faults)))
        if len(faults) > 0:
            for fan in fans:
                fan.set_speed(100)
            return
        for fan in fans:
            fan.set_speed(self.speed)


@thermal_json_object("fan.all.set_speed")
class SetFanSpeedAction(ThermalPolicyActionBase):
    JSON_FIELD_SPEED = "speed"

    def __init__(self):
        self.speed = None

    def load_from_json(self, json_obj):
        if self.JSON_FIELD_SPEED in json_obj:
            speed = float(json_obj[self.JSON_FIELD_SPEED])
            if speed < 0 or speed > 100:
                raise ValueError(
                    'SetFanSpeedAction invalid speed value {} in JSON policy file, valid value should be [0, 100]'.format(speed))
            self.speed = speed
        else:
            raise ValueError("SetFanSpeedAction missing field in json file")

    def execute(self, thermal_info_dict):
        ztime = time.strftime('%F %T', time.localtime())
        print('--------{0} policy: fan.all.set_speed'.format(ztime))
        fans = thermal_info_dict['fan_info'].fans.values()
        for fan in fans:
            fan.set_speed(self.speed)


@thermal_json_object('switch.power_cycling')
class SwitchPolicyAction(ThermalPolicyActionBase):
    """
    Base class for thermal action. Once all thermal conditions in a thermal policy are matched,
    all predefined thermal action will be executed.
    """

    def execute(self, thermal_info_dict):
        """
        Take action when thermal condition matches. For example, power cycle the switch.
        :param thermal_info_dict: A dictionary stores all thermal information.
        :return:
        """
        self.__api_helper = APIHelper()
        helper_logger.log_error(
            "Error: thermal overload !!!!!!!!!!!!!!!!!!Please reboot Now!!")
        helper_logger.log_error("Error: thermal overload !!!!!!!!!!!!!!!!!!")
        helper_logger.log_error("recorded the fault cause begin...")
        print("Error: thermal overload !!!!!!!!!!!!!!!!!!Please reboot Now!!")
        # wait for all record actions done
        time.sleep(35)
        wait_ms = 30
        while wait_ms > 0:
            if os.path.isfile(THERMAL_OVERLOAD_POSITION_FILE):
                thermal_overload_pos = self.__api_helper.read_one_line_file(
                    THERMAL_OVERLOAD_POSITION_FILE)
            if "critical threshold" in thermal_overload_pos:
                break
            time.sleep(1)
            helper_logger.log_error("wait ############for recorded")
            wait_ms = wait_ms - 1
        helper_logger.log_error("recorded the fault cause...done")
        cmd = 'bash /usr/share/sonic/platform/thermal_overload_control.sh {}'.format(
            thermal_overload_pos)
        APIHelper().run_command(cmd)
