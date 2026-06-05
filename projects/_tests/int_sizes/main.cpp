#include <iostream>
#include <iomanip>
#include <climits> // note that CHAR_BIT is a transitive import
#include <cstdint>

// some rust-like macros from some guy on youtube who does embedded stuff
//  might be useful in the future
typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

// some notes on best practce:
/* do:
 *  - perfer int when the size of the integer doesnt matter,
 *  - prefer std::int#_t when storing a quantity that needs a guaranteed range
 *  - prefer std::uint#_t when doing bit manipulation or wrap-around behavious is required
 *
 * avoid:
 *  - short and long integers
 *  - fast and least integral types
 *  - unsigned types for holding quantities
 *  - 8-bit fixed width types (cuz of char alias)
 *  - any compiler-specific fixed-width integers
 */

int main()
{
    std::cout << std::left;

    std::cout << std::setw(8) << "i8: " << sizeof(i8) * CHAR_BIT << "\n";
    std::cout << std::setw(8) << "i16: " << sizeof(i16) * CHAR_BIT << "\n";
    std::cout << std::setw(8) << "i32: " << sizeof(i32) * CHAR_BIT << "\n";
    std::cout << std::setw(8) << "i64: " << sizeof(i64) * CHAR_BIT << "\n";\
    std::cout << "\n";

    std::cout << std::setw(8) << "u8: " << sizeof(u8) * CHAR_BIT << "\n";
    std::cout << std::setw(8) << "u16: " << sizeof(u16) * CHAR_BIT << "\n";
    std::cout << std::setw(8) << "u32: " << sizeof(u32) * CHAR_BIT << "\n";
    std::cout << std::setw(8) << "u64: " << sizeof(u64) * CHAR_BIT << "\n";
    std::cout << "\n";

    // note that the 8 bit types are usually treated as chars in modern compilers
    //  this because the stuff above are actually aliases and not separate types.
    //  and often times 8 bit integers are aliases for chars
    i8 x = 65;
    u8 y = 65;
    std::cout << x << y << "\n";

    // it is best practice to avoid these types:
    std::cout << "\n";
    std::cout << "least 8:  " << sizeof(std::int_least8_t)  * 8 << " bits\n";
    std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
    std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
    std::cout << '\n';
    std::cout << "fast 8:  "  << sizeof(std::int_fast8_t)   * 8 << " bits\n";
    std::cout << "fast 16: "  << sizeof(std::int_fast16_t)  * 8 << " bits\n";
    std::cout << "fast 32: "  << sizeof(std::int_fast32_t)  * 8 << " bits\n";

    return 0;
}
