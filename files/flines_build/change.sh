#!/bin/bash
# work directory must be project root directory, not this shell directory
# call me use ./files/flines_build/change.sh

if [ ! -f Makefile.work ]
then
    echo run me at git repository root directory
    exit -2
fi
export SONIC_IMAGE_VERSION=$(date +%Y%m%d%H%M)

git reset --hard HEAD
git checkout -f .
git checkout evb_8t_rel
git pull -fr 
git log -n 1

cp -f files/flines_build/.gitmodules ./
cp -f files/flines_build/Makefile.work ./
cp -f files/flines_build/Dockfile* sonic-slave-buster/
cp -f files/flines_build/sources.list.amd64 files/apt/sources.list.amd64
cp -f files/flines_build/docker-base-stretch/versions-deb-stretch files/build/versions/dockers/docker-base-stretch/versions-deb-stretch
cp -f files/flines_build/docker-base-buster/versions-deb-buster files/build/versions/dockers/docker-base-buster/versions-deb-buster
cp -f files/flines_build/dockers/docker-base/Dockerfile.j2 dockers/docker-base-stretch/Dockerfile.j2
cp -f files/flines_build/dockers/docker-base-buster/Dockerfile.j2 dockers/docker-base-buster/Dockerfile.j2

rm target/debs/buster/sonic-device-data* || true
rm target/sonic-clounix.bin* || true
rm target/debs/buster/sonic-platform-flines* || true
make target/sonic-clounix.bin
# cppcheck --enable=all --xml --xml-version=2.0 platform/clounix/sonic-platform-modules-flines >out.xml 2>err.xml 