#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::string_view s1 { "Hello, world!" }; // initialize with C-style string literal
    std::cout << s1 << '\n';

    std::string s{ "Hello, world!" };
    std::string_view s2 { s };  // initialize with std::string
    std::cout << s2 << '\n';

    std::string_view s3 { s2 }; // initialize with std::string_view
    std::cout << s3 << '\n';

    // it also does not change the previous string
    std::string name { "Alex" };
    std::string_view sv { name }; // sv is now viewing name
    std::cout << sv << '\n'; // prints Alex

    sv = "John"; // sv is now viewing "John" (does not change name)
    std::cout << sv << '\n'; // prints John

    std::cout << name << '\n'; // prints Alex

    // we can also use constexpr
    constexpr std::string_view s_two{ "Hello, world!" }; // s is a string symbolic constant
    std::cout << s_two << '\n'; // s will be replaced with "Hello, world!" at compile-time

    // !! be careful because string_view does not have ownership of the string it is viewing
    //      we can also use std::string& references instead of string_view (<C++17)

    return 0;
}