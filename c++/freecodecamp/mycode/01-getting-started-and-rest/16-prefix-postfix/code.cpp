#include <iostream>

int main() {
    // postfix
    int value = 5;
    std::cout << "the value is (incrementing) : " << value++ << std::endl;

    std::cout << "the value is (incrementing) : " << value << std::endl;

    value = 5;

    std::cout << "the value is (decrementing) :" << value-- << std::endl;

    std::cout << "the value is (incrementing) : " << value << std::endl;

    //prefix

    value = 5;


    std::cout << "the value is (incrementing) : " << ++value << std::endl;

    value = 5;


    std::cout << "the value is (incrementing) : " << --value << std::endl;
}