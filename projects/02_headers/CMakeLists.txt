add_executable(02_headers
        main.cpp
        add.cpp
)

target_link_libraries(02_headers
        PRIVATE
        spdlog::spdlog
)