workspace "PG3"
    configurations { "Debug", "Release" }
    platforms {"x64" }

    location "project"
    basedir "project"

project "PG3"
    kind "ConsoleApp"
    language "C++"
    
    -- 出力先 と 中間 フォルダの指定
    targetdir "generated/outputs/%{cfg.buildcfg}"
    objdir "generated/obj/%{cfg.buildcfg}"
    targetname "PG3"  -- Exe名をworkspace名に設定

    cppdialect "C++20"
    characterset "Unicode"

    includedirs { "project/code" }

    files { "**.h", "**.cpp" }

    buildoptions { "/utf-8" }

    filter "platforms:x64"
        architecture "x64"

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"