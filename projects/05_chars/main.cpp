#include <iostream>
#include <bits/this_thread_sleep.h>

int main()
{
    char c{};
    std::cout << "enter a character: ";
    std::cin >> c;
    std::cout << "value: " << static_cast<int>(c);
    return 0;
}
