// basic example of multi-file programs

#include <iostream>

int getInteger();

int main()
{
    int x = getInteger();
    int y = getInteger();

    std::cout << x + y << std::endl;
    return 0;
}