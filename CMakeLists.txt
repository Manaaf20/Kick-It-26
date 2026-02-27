cmake_minimum_required(VERSION 3.10)

# Set project name
project(KickIt)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include Google Test
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Find the GTest library
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Include directories for your classes
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

# Source files of your project
set(SOURCES
    src/main.cpp
    src/Player.cpp
    src/Ball.cpp
    src/Game.cpp
    src/ScoreBoard.cpp
)

# Add executable
add_executable(KickIt ${SOURCES})

# Link Google Test
target_link_libraries(KickIt ${GTEST_LIBRARIES} pthread)

# Test executable
set(TEST_SOURCES
    tests/test_Player.cpp
    tests/test_Ball.cpp
    tests/test_Game.cpp
    tests/test_ScoreBoard.cpp
)

add_executable(KickItTests ${TEST_SOURCES})
target_link_libraries(KickItTests ${GTEST_LIBRARIES} pthread)

# Enable testing
enable_testing()
add_test(NAME KickItTests COMMAND KickItTests)