#include <spdlog/spdlog.h>
#include <windows.h>

int main()
{
    spdlog::set_pattern("[%H:%M:%S] [%^%l%$] [%s:%#] %v");

    SYSTEM_INFO si;
    GetSystemInfo(&si);

    SPDLOG_INFO("HELLO WORLD");
    SPDLOG_INFO("spdlog v{}.{}", SPDLOG_VER_MAJOR, SPDLOG_VER_MINOR);
    SPDLOG_INFO("");
    SPDLOG_INFO("cores {}", si.dwNumberOfProcessors);
    SPDLOG_INFO("page size {} bytes", si.dwPageSize);
    SPDLOG_INFO("min application address {}", si.lpMinimumApplicationAddress);
    SPDLOG_INFO("max application address {}", si.lpMaximumApplicationAddress);
    SPDLOG_INFO("active processor mask {}", si.dwActiveProcessorMask);


    return 0;
}
