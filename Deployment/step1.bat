echo Started
dir
echo %CD%
echo %teamcity.build.checkoutDir%
echo %system.agent.home.dir%
echo %build.checkoutDir%
echo %agent.home.dir%
rem cd is equals to C:\Dev\Team City\BuildAgentDarkMatter\work\d6fb9096627369d
set "uproject=%CD%/Game/DarkMatter/DarkMatter.uproject"
echo %uproject%
"../../../UnrealEngine/Engine/Build/BatchFiles/Build.bat" DarkMatterEditor Win64 Development "../../../BuildAgentDarkMatter/work/d6fb9096627369d/Game/DarkMatter/DarkMatter.uproject" -WaitMutex
echo Finished