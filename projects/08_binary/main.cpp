#include <bitset>
#include <iostream>

int main()
{
    // std::bitset 8 means we want to store 8 bits
    constexpr std::bitset<8> bin1 = 0b1100'0101;    // >C++14, binary
    constexpr std::bitset<8> bin2 = 0xC5;           // <C++14, need hexadecimal workaround

    std::cout << bin1 << '\n' << bin2 << '\n';
    std::cout << std::bitset<4>{ 0b1010 } << '\n';

    return 0;
}
