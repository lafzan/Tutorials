#include <iostream>

int main() {
    int number1 {2};
    int number2 {7};

    auto result = number1 + number2 ;

    std::cout << result << std::endl;

    result = number1 * number2;
    std::cout << result << std::endl;

    result = number1 / number2;
    std::cout << result<< std::endl;

    result = number1 - number2;
    std::cout << result<< std::endl;

    result = number2 % number1;
    std::cout << result<< std::endl;


}