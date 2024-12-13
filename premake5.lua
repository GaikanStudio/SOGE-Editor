

include "Premake5/qt-scripts/qt.lua"
local qt = premake.extensions.qt

local qt_path = "A:/DevTools/Qt/6.5.3/msvc2019_64"

local qt_version = "6"
local qt_libs_path = qt_path .. "/lib"
local qt_dlls_path = qt_path .. "/bin"
local qt_plugins_path = qt_path .. "/plugins"
local qt_qmake_path = qt_libs_path .. "/qmake6.exe"
local qt_windeployqt6_path = qt_dlls_path .. "/windeployqt6.exe"

local function setQtDllPostBuildCopy(name, isDebug)
    prefix = "Qt" .. qt_version
    libname = prefix .. name
    if isDebug then
        libname = libname .. "d"
    end

    libname = libname .. ".dll"
    libpath = qt_dlls_path .. "/" .. libname
    print("Setting postbuild copy comand for " .. libpath)

    return "{COPYFILE} " .. libpath .. " %{wks.location}/%{prj.name}"
end

local function setQtDeployOnPostbuild(targetExecutable, isDebug)
    config_flag = " --debug "
    if not isDebug then
        config_flag = " --release "
    end

    return "call " .. qt_windeployqt6_path .. " " .. targetExecutable .. config_flag
end

solution "SOGEQtE"
    architecture "x64"
    startproject "Editor"
    configurations {"Debug", "Release"}

    buildpattern = "%{cfg.buildcfg}.%{cfg.system}.%{cfg.architecture}"

    project "SOGEQtE"
        location "SOGEQtE"
        kind "ConsoleApp"
        buildoptions {"/Zc:__cplusplus", "/permissive-"}
        language "C++"
        cppdialect "C++20"
        
        targetdir("%{wks.location}/%{prj.name}/")
        objdir("build/int/" .. buildpattern .. "/%{prj.name}")

        files
        {
            "%{wks.location}/%{prj.name}/include/**.hpp",
            "%{wks.location}/%{prj.name}/source/**.cpp"
        }

        includedirs
        {
            "%{wks.location}/%{prj.name}/include"
        }

        qt.enable()
        qtuseexternalinclude(true)
        qtpath(qt_path)
        qtprefix("Qt6")
        -- "core", "gui", "widgets", "qml"
        qtmodules { "core", "gui", "widgets", "qml", "network"}
        -- qtmodules 
        -- {
        --     "core",
        --     "gui",
        --     "widgets",
        --     "network"
        -- }

        filter "configurations:Debug"
            symbols "on"
            qtsuffix "d"

            defines
            {
                "SOGE_DEBUG",
                "SOGEQTE_DEBUG"
            }

            postbuildcommands
            {
                setQtDeployOnPostbuild("%{wks.location}/%{prj.name}/%{prj.name}.exe", true)
            }

        filter "configurations:Release"
            optimize "on"

            defines
            {
                "SOGE_RELEASE",
                "SOGEQTE_RELEASE"
            }

            postbuildcommands
            {
                setQtDeployOnPostbuild("%{wks.location}/%{prj.name}/%{prj.name}.exe", false)
            }