#include <iostream>

int main() {
    bool red_light {true};
    bool green_light {false};

    if(red_light) {
        std::cout << "Stop!" << std::endl;

    }else{
        std::cout << "Go Trough!" << std::endl;
    }
std::cout << std::boolalpha;
    std::cout << "size of boolean " << sizeof(red_light) << std::endl;
    std::cout << "red_light is : " << red_light << std::endl;

    
    return 0;
}