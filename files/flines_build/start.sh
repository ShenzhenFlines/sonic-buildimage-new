# !/bin/bash
# work directory must be project root directory, not this shell directory
# call me use ./files/flines_build/start.sh

if [ ! -f Makefile.work ]
then
    echo run me at git repository root directory
    exit -2
fi

export SONIC_IMAGE_VERSION=$(date +%Y%m%d%H%M)

cp -f files/flines_build/.gitmodules ./
cp -f files/flines_build/Makefile.work ./
cp -f files/flines_build/Dockerfile* sonic-slave-buster/
cp -f files/flines_build/sources.list.amd64 files/apt/sources.list.amd64
cp -f files/flines_build/docker-base-stretch/versions-deb-stretch files/build/versions/dockers/docker-base-stretch/versions-deb-stretch
cp -f files/flines_build/docker-base-buster/versions-deb-buster files/build/versions/dockers/docker-base-buster/versions-deb-buster
cp -f files/flines_build/dockers/docker-base/Dockerfile.j2 dockers/docker-base/Dockerfile.j2
cp -f files/flines_build/dockers/docker-base-buster/Dockerfile.j2 dockers/docker-base-buster/Dockerfile.j2

make init
cd src/sonic-swss
git am ../../platform/clounix/patch/0001-support-evb8t-for-sonic-swss.patch
cd ../sonic-utilities/
git am ../../platform/clounix/patch/0001-support-evb8t-for-sonic-utilities.patch
cd ../sonic-sairedis
git am ../../platform/clounix/patch/0001-support-evb8t-for-sonic-sairedis.patch
cd ../../
make configure PLATFORM=clounix
make target/sonic-clounix.bin
# cppcheck --enable=all --xml --xml-version=2.0 platform/clounix/sonic-platform-modules-flines >out.xml 2>err.xml 