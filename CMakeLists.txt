cmake_minimum_required(VERSION 3.20)
project(cpp_sandbox)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# external dependencies
add_subdirectory(external/spdlog)

# projects
#add_subdirectory(projects/template)
#add_subdirectory(projects/01_multifile)
#add_subdirectory(projects/02_headers)
#add_subdirectory(projects/03_sphere)
#add_subdirectory(projects/04_kinematics)
#add_subdirectory(projects/05_chars)
#add_subdirectory(projects/06_calculator)
#add_subdirectory(projects/07_gravity)
add_subdirectory(projects/08_binary)
#add_subdirectory(projects/_tests/int_sizes)

## tests
#add_subdirectory(projects/_tests/datatype_sizes)
#add_subdirectory(projects/_tests/file_ops)
#add_subdirectory(projects/_tests/bullshit)