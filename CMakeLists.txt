cmake_minimum_required(VERSION 3.10)

# Set C and C++ compilers explicitly
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

project(Giryu)

# Add all source files to the executable
add_executable(main 
    src/main.cpp 
    src/Models/Troop.cpp 
    src/Models/Archer.cpp 
    src/Models/Barracks.cpp 
    src/Models/Blacksmith.cpp
    src/Models/Building.cpp  # Include Building.cpp
)

# Specify the location of header files
target_include_directories(main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

# Set output directory for executable
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Build)
