cmake_minimum_required(VERSION 3.10)
project(ChessGame)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Find SDL3
find_package(SDL3 REQUIRED)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/main.cpp
    # Add more as you create them:
    src/setup.cpp
    src/piece.cpp
)

# Create executable
add_executable(chess ${SOURCES})

# Link libraries
target_link_libraries(chess SDL3::SDL3)
