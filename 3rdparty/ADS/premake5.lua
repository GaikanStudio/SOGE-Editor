project "ADS"
    kind "StaticLib"
    language "C++"
    cppdialect "C++17"
    buildoptions {"/Zc:__cplusplus", "/permissive-"}
    location "./"

    targetdir("lib/bin/" .. buildpattern .. "/%{prj.name}")
    objdir("lib/int/" .. buildpattern .. "/%{prj.name}")

    files
    {
        "./ADS/src/*.h",
        "./ADS/src/*.cpp"
    }

    includedirs
    {
        "./ADS/src"
    }

    defines
    {
        "ADS_STATIC"
    }

    qt.enable()
    qtuseexternalinclude(true)
    qtpath(qt_path)
    qtprefix("Qt6")
    qtmodules { "core", "gui", "widgets"}

    filter "configurations:Debug"
        symbols "on"

    filter "configurations:Release"
        optimize "on"

    filter "system:linux"
        systemversion "latest"

        files
        {
            "./ADS/src/linux/*.h",
            "./ADS/src/linux/*.cpp"
        }