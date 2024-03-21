cmake_minimum_required(VERSION 3.0)
project(Giryu)

# Add C++11 standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Source files
set(SOURCES
    src/main.cpp
    # Add more source files as needed
)

# Add executable target
add_executable(${PROJECT_NAME} ${SOURCES})

# Include directories
# include_directories(...)

# Link libraries if needed
# target_link_libraries(${PROJECT_NAME} ...)

# Compiler options if needed
# target_compile_options(${PROJECT_NAME} ...)

# Install target if needed
# install(TARGETS ${PROJECT_NAME} DESTINATION bin)
