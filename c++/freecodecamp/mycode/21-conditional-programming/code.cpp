#include <iostream>
#include <string>

int main() {

    int number1 {55};
    int number2 {60};

    bool result = (number1 < number2);

    std::cout << std::endl;
    std::cout << "free standing if statement" << std::endl;;

    if (result) {
        std::cout << number1 << " is less than " << number1 << std::endl;
    }

    if (!(result == true)) {
        std::cout << number1 << " is greater than " << number1 << std::endl;


    }
  if (result) {
        std::cout << number1 << " is less than " << number1 << std::endl;
    }else {
        std::cout << number1 << " is greater than " << number1 << std::endl;


    }
    if (number1 < number2) {
        std::cout << number1 << " is less than " << number1 << std::endl;
    }else {
        std::cout << number1 << " is greater than " << number1 << std::endl;


    }
    // switch 

    int a {20};

    switch (a) {

        case 20: {
            std::cout << "a is equal to 20" << std::endl;
        }
        break;

        case 30: {
            std::cout << "a is equal to 30" << std::endl;
        }
        break;

        default: {
            std::cout << "no a match" << std::endl;
        }
        break;
    }
        std::string name = "John";

    //ternary operator

    int max{};
    int aa {35};
    int bb {20};

    std::cout << std::endl;
    std::cout << "using regular if" << std::endl;

    if (aa>bb) {
        max = aa;
    } else {
        max = bb;
    }
    auto max1 = (aa>bb) ? aa : 22.5f;
    std::cout << "max1 : " << max1 << std::endl;
    std::cout << "type of max1 is : " << typeid(max1).name() <<std::endl;


    return 0;
}