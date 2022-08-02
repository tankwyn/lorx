set VER=0.1.0

@IF exist release (rmdir /S /Q release && mkdir release) ELSE (mkdir release) 

setlocal
set LUA=D:\workspace\gamedev\lua-5.3.6\msvc64d
set ORX=D:\workspace\gamedev\orx-1.13-dev\dev-vs2022-64

python.exe autogen.py clean
python.exe autogen.py

@rmdir /S /Q gen\__pycache__
@rmdir /S /Q gen\cfg\__pycache__

set fn=lorx-src-%VER%
mkdir release\%fn%
xcopy /E src\ release\%fn%\src\
xcopy /E examples\ release\%fn%\examples\
xcopy /E gen\ release\%fn%\gen\
xcopy /E templates\ release\%fn%\templates\
copy autogen.py release\%fn%\
copy LICENSE release\%fn%\
copy README.md release\%fn%\ 
cd release
tar zcf %fn%.tar.gz %fn%
cd ..
rmdir /S /Q release\%fn%

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

set fn=lorx-win64-%VER%
mkdir release\%fn%
xcopy /E bin\ release\%fn%\bin\
xcopy /E examples\ release\%fn%\examples\
xcopy /E api\ release\%fn%\api\
xcopy /E doc\site\ release\%fn%\doc\
cd release
tar zcf %fn%.tar.gz %fn%
cd ..
rmdir /S /Q release\%fn%

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

set fn=lorx-win32-%VER%
mkdir release\%fn%
xcopy /E bin\ release\%fn%\bin\
xcopy /E examples\ release\%fn%\examples\
xcopy /E api\ release\%fn%\api\
xcopy /E doc\site\ release\%fn%\doc\
cd release
tar zcf %fn%.tar.gz %fn%
cd ..
rmdir /S /Q release\%fn%

endlocal