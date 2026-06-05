add_executable(template main.cpp)

target_link_libraries(template
        PRIVATE
        spdlog::spdlog
)