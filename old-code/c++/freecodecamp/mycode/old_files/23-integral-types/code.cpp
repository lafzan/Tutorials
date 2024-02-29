#include <iostream>

int main() {
short int var1 {10};
short int var2 {20};

char var3 {40};
char var4 {50};

short result = var1 + var2;
char result1 = var3 + var4;


std::cout<< result << std::endl;


std::cout << sizeof(result) << std::endl;


std::cout << var3 << std::endl;
std::cout<< result1 << std::endl;

std::cout << sizeof(result1) << std::endl;





return 0;
}


