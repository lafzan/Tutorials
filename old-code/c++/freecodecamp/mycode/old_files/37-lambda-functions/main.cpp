#include <iostream>

int main() {


   auto func = []() {
       std::cout << " hello lambda function " << std::endl; 
    };
    auto func1 = [](double a, double b) {
       std::cout << " hello lambda function " << std::endl; 
       return a+b;
    };
    std::cout << func1(4,2) << std::endl;

    auto func2 = [] (double a, double b) -> int {
        return ((a / static_cast<int>(b)*b - a);
    };

    std::cout << func2(7,5) << std::endl;

}