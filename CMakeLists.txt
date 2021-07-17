cmake_minimum_required(VERSION 3.15)
project(ytmp3-dl VERSION 1.0.0)

# Place the executable in the bin directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_CXX_FLAGS -pthread)
set(CMAKE_CXX_STANDARD 11)

file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "include/ytmp3-dl/*.hpp")

add_library(libytmp3-dl STATIC
  ${HEADERS}
  ${SOURCES}
)
add_executable(ytmp3-dl ytmp3-dl.cpp ${SOURCES})
target_link_libraries(ytmp3-dl libytmp3-dl)

