@echo on
set CMAKE_EXE="%ProgramFiles(x86)%\CMake 2.8\bin\cmake"

%CMAKE_EXE% -E remove_directory cmake-build
%CMAKE_EXE% -E make_directory cmake-build
%CMAKE_EXE% -E chdir cmake-build %CMAKE_EXE% -G "Visual Studio 10" ..
pause
