cmake_minimum_required(VERSION 3.20)
project(cpp_sandbox)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# external dependencies
add_subdirectory(external/spdlog)

# projects
add_subdirectory(projects/template)
add_subdirectory(projects/01_multifile)
add_subdirectory(projects/02_headers)