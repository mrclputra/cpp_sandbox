add_executable(01_multifile
        main.cpp
        input.cpp
)

target_link_libraries(01_multifile
        PRIVATE
        spdlog::spdlog
)