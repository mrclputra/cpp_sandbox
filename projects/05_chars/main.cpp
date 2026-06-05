#include <iostream>
#include <bits/this_thread_sleep.h>

int main()
{
    for (int i = 0; i < 128; i++) {
        if (i == 127)
            i = 0;

        std::cout << static_cast<char>(i);
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    return 0;
}
