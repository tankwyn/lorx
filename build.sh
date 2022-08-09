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

if [ -d gen/cfg/__pycache__ ]; then
    rm -rf gen/cfg/__pycache__
fi

fn=lorx-src-${VER}
mkdir release/${fn}
cp src examples gen templates autogen.py LICENSE README.md release/${fn}/ -r
cd release
tar zcf ${fn}.tar.gz ${fn}
cd ..
rm -rf release/${fn}

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

fn=lorx-linux64-${VER}
mkdir release/${fn}
cp bin examples api release/${fn}/ -r
cp doc/site release/${fn}/doc -r
cd release
tar zcf ${fn}.tar.gz ${fn}
cd ..
rm -rf release/${fn}


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

fn=lorx-linux32-${VER}
mkdir release/${fn}
cp bin examples api release/${fn}/ -r
cp doc/site release/${fn}/doc -r
cd release
tar zcf ${fn}.tar.gz ${fn}
cd ..
rm -rf release/${fn}