echo Started
dir
"../../../UnrealEngine/Engine/Build/BatchFiles/RunUAT.bat" BuildCookRun -Project="../BuildAgentDarkMatter/work/d6fb9096627369d/Game/DarkMatter/DarkMatter.uproject" -NoP4 -NoCompileEditor -Distribution -TargetPlatform=Win64 -Platform=Win64 -ClientConfig=Shipping -ServerConfig=Shipping -Cook -Build -Stage -Pak -Archive -ArchiveDirectory=".../BuildAgentDarkMatter/OutputBuild" -Rocket -Prereqs -Package
echo Finished