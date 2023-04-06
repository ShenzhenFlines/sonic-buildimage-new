# !/bin/bash
# work directory must be project root directory, not this shell directory
# call me use ./files/flines_build/start.sh
# buidler should set proxy by self
# export http_proxy=http://172.168.120.84:7890
# export https_proxy=http://172.168.120.84:7890
git reset --hard HEAD
git checkout evb_8t_rel
git checkout -f .
git pull -fr 
rm target/debs/buster/sonic-device-data_1.0-1_all.deb* || true
rm target/sonic-clounix.bin || true
rm target/debs/buster/sonic-platform-flines-common_1.0.0_amd64.deb || true
cp -f files/flines_build/.gitmodules ./
cp -f files/flines_build/Makefile.work ./
cp -f files/flines_build/Dockfile* sonic-slave-buster/
cp -f files/flines_build/sources.list.amd64 files/apt/
cp -f files/flines_build/docker-base-stretch/versions-deb-stretch files/build/versions/dockers/docker-base-stretch/versions-deb-stretch
cp -f files/flines_build/docker-base-buster/versions-deb-buster files/build/versions/dockers/docker-base-buster/versions-deb-buster
cp -f files/flines_build/dockers/docker-base/Dockerfile.j2 dockers/docker-base-stretch/Dockerfile.j2
cp -f files/flines_build/dockers/docker-base-buster/Dockerfile.j2 dockers/docker-base-buster/Dockerfile.j2
# git add .gitmodules Makefile.work
# git commit -m "fix: use internal git repository"
# git tag $(date +%Y%m%d%H%M)
export SONIC_IMAGE_VERSION=$(date +%Y%m%d%H%M)
make init
cd src/sonic-swss
git am ../../platform/clounix/patch/0001-support-evb8t-for-sonic-swss.patch
cd ../sonic-utilities/
git am ../../platform/clounix/patch/0001-support-evb8t-for-sonic-utilities.patch
cd ../sonic-sairedis
git am ../../platform/clounix/patch/0001-support-evb8t-for-sonic-sairedis.patch
cd ../../
make configure PLATFORM=clounix
# make target/sonic-clounix.bin
# cppcheck --enable=all --xml --xml-version=2.0 platform/clounix/sonic-platform-modules-flines >out.xml 2>err.xml 