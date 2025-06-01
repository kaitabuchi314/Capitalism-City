-- premake5.lua
workspace "Capitalism City"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "App"

   -- Workspace-wide build options for MSVC
   filter "system:windows"
      buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus" }

OutputDir = "%{cfg.system}-%{cfg.architecture}/%{cfg.buildcfg}"

group "Vendor"
	include "Vendor/Glad/Build-Glad.lua"
group ""

group "Core"
	include "Core/Build-Core.lua"
group ""

include "App/Build-App.lua"