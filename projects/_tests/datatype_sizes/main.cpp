#include <iostream>

int main()
{
    std::cout << "bool " << sizeof(bool) << "\n";
    std::cout << "\n";

    std::cout << "char " << sizeof(char) << "\n";
    std::cout << "wchar_t " << sizeof(wchar_t) << "\n";
    std::cout << "char8_t " << sizeof(char8_t) << "\n";
    std::cout << "char16_t " << sizeof(char16_t) << "\n";
    std::cout << "char32_t " << sizeof(char32_t) << "\n";
    std::cout << "\n";

    std::cout << "short " << sizeof(short) << "\n";
    std::cout << "int " << sizeof(int) << "\n";
    std::cout << "long " << sizeof(long) << "\n";
    std::cout << "long long " << sizeof(long long) << "\n";
    std::cout << "\n";

    std::cout << "float " << sizeof(float) << "\n";
    std::cout << "double " << sizeof(double) << "\n";
    std::cout << "long double " << sizeof(long double) << "\n";
    std::cout << "\n";

    std::cout << "nullptr " << sizeof(std::nullptr_t) << "\n";

    return 0;
}
