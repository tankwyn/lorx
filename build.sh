#!/bin/bash


VER=0.1.0

if [ -d release ]; then
    rm -rf release
fi 
mkdir release

export LUA=${HOME}/workspace/lua-5.3.6/src
export ORX=${HOME}/workspace/orx-1.13-dev/dev-linux64

python3 autogen.py clean
python3 autogen.py

if [ -d gen/__pycache__ ]; then
    rm -rf gen/__pycache__
fi

tar zcf release/lorx-src-${VER}.tgz src examples gen templates autogen.py LICENSE README.md

cd src
make -f Makefile.linux clean
make -f Makefile.linux config=debug
make -f Makefile.linux clean
make -f Makefile.linux config=profile
make -f Makefile.linux clean
make -f Makefile.linux config=release
cd ..

cd doc
mkdocs build
cd ..

tar zcf release/lorx-linux64-${VER}.tgz bin examples api doc/site


export LUA=${HOME}/workspace/lua-5.3.6/src32
export ORX=${HOME}/workspace/orx-1.13-dev/dev-linux32

python3 autogen.py clean
python3 autogen.py

cd src
make -f Makefile.linux arch=x86 clean
make -f Makefile.linux arch=x86 config=debug
make -f Makefile.linux arch=x86 clean
make -f Makefile.linux arch=x86 config=profile
make -f Makefile.linux arch=x86 clean
make -f Makefile.linux arch=x86 config=release
cd ..

cd doc
mkdocs build
cd ..

tar zcf release/lorx-linux32-${VER}.tgz bin examples api doc/site
