#include <iostream>

int main() {

    auto var1 {12};
    auto var2 {13.0};
    auto var3{14.0f};
    auto var4{15.0L};
    auto var5{'e'};

    auto var6{123u}; 
    auto var7{123ul};
    auto var8{123ll};


    std::cout << "size of var1 " << sizeof(var1) << std::endl;
    std::cout << "size of var1 " << sizeof(var2) << std::endl;
    std::cout << "size of var1 " << sizeof(var3) << std::endl;
    std::cout << "size of var1 " << sizeof(var4) << std::endl;
    std::cout << "size of var1 " << sizeof(var5) << std::endl;
    std::cout << "size of var1 " << sizeof(var6) << std::endl;
    std::cout << "size of var1 " << sizeof(var7) << std::endl;
    std::cout << "size of var1 " << sizeof(var8) << std::endl;
}