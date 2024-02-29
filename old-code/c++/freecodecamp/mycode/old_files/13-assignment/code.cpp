#include <iostream>

int main() {
    int var1{123};
    std::cout << var1 << std::endl;

    var1 = 55;

    std::cout << var1 << std::endl;


    auto var3 {333u};

    var3 = -22;

    std::cout << var3 << std::endl;
}