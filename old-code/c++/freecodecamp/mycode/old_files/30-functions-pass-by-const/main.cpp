#include <iostream>

void say_age(const int age) ;

int main() {
    int age{23}; //local
    std::cout << "age (before call) : " << age << "&age : " << &age << std::endl;
    say_age(age); // Argument
    std::cout << "age (after call) : " << age << "&age : " << &age << std::endl;

    return 0;
}

void say_age(const int age) {
    //++age;yaani mucize degil iceride degisteremezsin iste..
    std::cout << "Hello, you are " << age << " years old! &age : " << &age << std::endl;
}