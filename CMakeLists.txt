cmake_minimum_required(VERSION 3.20)
project(cpp_sandbox)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# external dependencies (git submodules)
# add_subdirectory(external/glm)

# projects
add_subdirectory(projects/template)
