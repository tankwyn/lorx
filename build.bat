set VER=0.1.0

@IF exist release (rmdir /S /Q release && mkdir release) ELSE (mkdir release) 

setlocal
set LUA=D:\workspace\gamedev\lua-5.3.6\msvc64d
set ORX=D:\workspace\gamedev\orx-1.13-dev\dev-vs2022-64

python.exe autogen.py clean
python.exe autogen.py

@rmdir /S /Q gen\__pycache__

tar zcf release\lorx-src-%VER%.tgz src examples gen templates autogen.py LICENSE README.md

cd src
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"
nmake.exe /f Makefile.nmake clean
nmake.exe /f Makefile.nmake config=debug
nmake.exe /f Makefile.nmake clean
nmake.exe /f Makefile.nmake config=profile
nmake.exe /f Makefile.nmake clean
nmake.exe /f Makefile.nmake config=release
cd ..

cd doc
mkdocs build
cd ..

tar zcf release\lorx-win64-%VER%.tgz bin examples api doc\site

endlocal

setlocal
set LUA=D:\workspace\gamedev\lua-5.3.6\msvc32d
set ORX=D:\workspace\gamedev\orx-1.13-dev\dev-vs2022-32

python.exe autogen.py clean
python.exe autogen.py

cd src
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars32.bat"
nmake.exe /f Makefile.nmake clean
nmake.exe /f Makefile.nmake config=debug
nmake.exe /f Makefile.nmake clean
nmake.exe /f Makefile.nmake config=profile
nmake.exe /f Makefile.nmake clean
nmake.exe /f Makefile.nmake config=release
cd ..

cd doc
mkdocs build
cd ..

tar zcf release\lorx-win32-%VER%.tgz bin examples api doc\site

endlocal