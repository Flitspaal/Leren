cmake_minimum_required(VERSION 3.0)

project(LERENOFZ LANGUAGES CXX)

add_executable(LERENOFZ main.cpp
    Robot.cpp
    Robot.h
    GoedkopeRobot.cpp
    GoedkopeRobot.h
    DureRobot.cpp
    DureRobot.h
)

if(MSVC)
    target_compile_options(LERENOFZ
            PUBLIC
            /W3 /WX
    )
else()
    target_compile_options(LERENOFZ
            PUBLIC
            -Wall -Wextra -Wpedantic
    )
endif()



target_compile_features(LERENOFZ PUBLIC cxx_std_17)

set_target_properties(LERENOFZ PROPERTIES
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF
        LINKER_LANGUAGE CXX
)

target_compile_options(LERENOFZ
        PUBLIC
        $<$<AND:$<CXX_COMPILER_ID:Clang>,$<PLATFORM_ID:Linux>>:-stdlib=libstdc++>
)

target_link_options(LERENOFZ
        PUBLIC
        $<$<AND:$<CXX_COMPILER_ID:Clang>,$<PLATFORM_ID:Linux>>:-stdlib=libstdc++>
)