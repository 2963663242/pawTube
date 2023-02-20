chcp 65001
set WORKSPACE=%~dp0..
set BUILD_DIR=%WORKSPACE%\build
echo 工作目录：%WORKSPACE%
set CMAKE_PREFIX_PATH="C:\Qt\5.15.2\msvc2019"

if not exist %BUILD_DIR% (
	mkdir %BUILD_DIR%
	)

if exist %CMAKE_PREFIX_PATH% (
   echo 找到预设qt路径：%CMAKE_PREFIX_PATH%
   cmake -S %WORKSPACE% -B %BUILD_DIR% -DCMAKE_PREFIX_PATH=%CMAKE_PREFIX_PATH% -G "Visual Studio 16 2019" -A Win32
) else (
	cmake -S %WORKSPACE% -B %BUILD_DIR%
)

if not %BUILD_FLAG% (
	cmake --build %BUILD_DIR% --config Release
)

