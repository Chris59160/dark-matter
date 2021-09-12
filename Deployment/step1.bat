echo Started
dir
echo %CD%
rem cd is equals to C:\Dev\Team City\BuildAgentDarkMatter\work\d6fb9096627369d
set "uproject=%CD%\Game\DarkMatter\DarkMatter.uproject"
echo %uproject%
echo %1
set "batfile=%1\..\UnrealEngine\Engine\Build\BatchFiles\Build.bat"
echo "%batfile%"
rem "%batfile%" DarkMatterEditor Win64 Development "%uproject%" -WaitMutex
"../../../UnrealEngine/Engine/Build/BatchFiles/Build.bat" DarkMatterEditor Win64 Development "%uproject%" -WaitMutex
echo Finished