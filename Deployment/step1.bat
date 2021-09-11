echo Started
dir
echo %CD%
echo %teamcity.build.checkoutDir%
echo %system.agent.home.dir%
"../../../UnrealEngine/Engine/Build/BatchFiles/Build.bat" DarkMatterEditor Win64 Development "../../../BuildAgentDarkMatter/work/d6fb9096627369d/Game/DarkMatter/DarkMatter.uproject" -WaitMutex
echo Finished