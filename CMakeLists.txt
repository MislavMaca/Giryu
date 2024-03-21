cmake_minimum_required(VERSION 3.10)

# Set C and C++ compilers explicitly
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

project(Giryu)

# Add executable
add_executable(main src/main.cpp)  # Specify source file explicitly

# Specify the location of header files
target_include_directories(main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Set output directory for executable
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Build)
