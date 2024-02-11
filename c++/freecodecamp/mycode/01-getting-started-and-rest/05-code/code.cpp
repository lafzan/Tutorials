#include <iostream>
#include <string>
int main() {
    //printing data
    std::cout << "Hello c++20" << std::endl;
    /*
    int age{21};
    std::cout << "Age: " << age << std::endl;


    std::cerr << "Something is wrong" << std::endl;
    std::clog << "Log message" << std::endl;

    std::string name;

    std::cin >> name;
    std::cout << "Hello " <<  name << " you are " << age << " years old!" << std::endl;
    */
   std::string full_name;
    std::cout << "please enter your full name: " << std::endl;

    std::getline(std::cin,full_name);
    std::cout << "your full name is " << full_name << std::endl;

    return 0;

}