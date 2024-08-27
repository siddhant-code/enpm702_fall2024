#include <iostream>
#include <iomanip> // for output manipulator std::setprecision()

int main()
{
    // ################//
    //--- slide 12 ---//
    // ################//
    //  int break1;  // OK
    //  int break_1; // OK
    //  int Break1;  // OK
    //  int BREAK;   // OK
    //  int _break1; // OK
    //  // int 1Break;  // Error: expected unqualified-id before numeric constant

    // ################//
    //--- slide 16 ---//
    // ################//
    //  int number = 20;
    //  std::cout << sizeof(number) << '\n'; // 4 bytes on my machine
    //  std::cout << sizeof(int) << '\n';    // 4 bytes on my machine

    // ################//
    //--- slide 22 ---//
    // ################//
    //  int number;                  // declaration
    //  number = 1;                  // assignment
    //  std::cout << number << '\n'; // 1
    //  number = 2;                  // assignment
    //  std::cout << number << '\n'; // 2

    // ################//
    //--- slide 26 ---//
    // ################//
    // int a{};                                                      // initialized to 0
    // std::cout << a << '\n';                                       // 0
    // double b{};                                                   // initialized to 0.0
    // std::cout << b << '\n';                                       // 0
    // std::cout << std::fixed << std::setprecision(1) << b << '\n'; // 0.0

    // ################//
    //--- slide 27 ---//
    // ################//
    // int a{};   // the value of a will be replaced later
    // int b{0};  // we plan to use the value of b
    // a = b + 3; // value of b is used and a is assigned a new value

    // ################//
    //--- slide 28 ---//
    // ################//
    // int number;                  // uninitialized
    // std::cout << number << '\n'; // garbage

    // ################//
    //--- slide 36-1 ---//
    // ################//
    // std::cout << 1.05 << '\n';  // this is a double
    // std::cout << 1.05f << '\n'; // this is a float
    // std::cout << 1f << '\n';    // error
    // std::cout << 1.0f << '\n';  // OK

    // ################//
    //--- slide 36-2 ---//
    // ################//
    // std::cout << std::setprecision(9);             // show 9 digits of precision
    // std::cout << 0.33333333333f << '\n';           // 0.333333343
    // std::cout << std::setprecision(15) << '\n';    // show 15 digits of precision
    // std::cout << 8.3642343534322323232322 << '\n'; // 8.36423435343223 (15 digits)

    // ################//
    //--- slide 37-1 ---//
    // ################//
    // bool is_today_sunny{true};
    // bool is_today_cloudy{false};
    // std::cout << is_today_sunny << '\n';  // 1
    // std::cout << is_today_cloudy << '\n'; // 0

    // ################//
    //--- slide 37-2 ---//
    // ################//
    // bool is_today_sunny{true};
    // bool is_today_cloudy{false};
    // std::cout << std::boolalpha << is_today_sunny << '\n';  // true
    // std::cout << std::boolalpha << true << '\n';            // true
    // std::cout << std::noboolalpha << true << '\n';          // 1
    // std::cout << std::boolalpha << is_today_cloudy << '\n'; // false
    // std::cout << std::boolalpha << false << '\n';           // false
    // std::cout << std::noboolalpha << false << '\n';         // 0

    // ################//
    //--- slide 39 ---//
    // ################//
    // int a{1};         // initialize variable a with literal value 1
    // int b{2 + 3 - 1}; // initialize variable b with computed value 4
    // int c{2 * 2 + 1}; // initialize variable c with computed value 5
    // int d{b};         // initialize variable d with variable value 4
}