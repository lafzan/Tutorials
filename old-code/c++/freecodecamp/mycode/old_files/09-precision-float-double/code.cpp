#include <iostream>
#include <iomanip>

int main() {

    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};
    long double number4{3.141592653589793238462643383279502884L};
    // print out the sizes

    std::cout << "number1's size is : " << sizeof(number1) << std::endl;
    std::cout << "number2's size is : " << sizeof(number2) << std::endl;
    std::cout << "number3's size is : " << sizeof(number3) << std::endl;
    std::cout << "number4's size is : " << sizeof(number4) << std::endl;

    //precision
    std::cout << std::setprecision(20);  // control the precision from std::cout

  std::cout << "number1's size is : " << number1 << std::endl;  // precision 7
    std::cout << "number2's size is : " << number2 << std::endl; // precision something 15
    std::cout << "number3's size is : " << number3 << std::endl;
    std::cout << "number3's size is : " << number4 << std::endl;


    // scientific notation.

    double number10 {192400023};
    double number11 {1.92400023e8};

    double number12 {1.924e8};
    double number13 {0.00000000003498};

    double number9 {3.498e-11};

    std::cout <<  "--------------------------" << std::endl;
    std::cout << " number10 is : " << number10 << std::endl;
    std::cout << " number11 is : " << number11 << std::endl;
    std::cout << " number12 is : " << number12 << std::endl;
    std::cout << " number13 is : " << number13 << std::endl;
    
    double number14 {};
    double number15 {5.6};

    double number16 = number15/number14;
    double number17 = number14 / number14;
    std::cout << "number16 is : " << number16 << std::endl;
    std::cout << "number16 is : " << number17 << std::endl;

    return 0;
}