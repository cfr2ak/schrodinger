cmake_minimum_required(VERSION 3.13)  
project(simple_example)

# Set variables
set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES src/main.cpp)

# Set dependency
FIND_PACKAGE(Boost REQUIRED filesystem)
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Build
link_directories(${CMAKE_BINARY_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
add_executable(app ${SOURCE_FILES} ${HEADERS})
