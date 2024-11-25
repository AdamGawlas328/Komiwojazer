cmake_minimum_required(VERSION 3.13)
project(implementation)

set(PROJECT_ID Komi)

set(SOURCE_FILES
        src/tsp_setup.cpp
        src/TSP.cpp
        )

set(SOURCES_FILES_TESTS
        test/tests.cpp
)

include(../SetCommonConfig.cmake)