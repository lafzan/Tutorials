#include <iostream>

int main() {

    char charecter1 {'a'};
    char charecter2 {'r'};
    char charecter3 {'r'};
    char charecter4 {'o'};
    char charecter5 {'w'};

    char value = 65;
    std::cout << "value : " << value << std::endl;
    std::cout << "value : " << static_cast<int>(value) << std::endl;
}