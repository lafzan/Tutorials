#include <iostream>

int main() {
    /*
    std::cerr << "std::cerr output : Something went wrong" << std::endl;

    std::clog << "std::log output : naber "  << std::endl;

    
    std::string name1;
    std::cout << "Please enter your last name and age: " << std::endl;
    std::cin >> name1 >> age ;

    std::cout << " Your name is : " << name1 << "and you are " << age << " years old"<<std::endl;
*/
    int age;
    std::string full_name;

    std::cout << "please enter your full name: " << std::endl;
    std::getline(std::cin,full_name);

    std::cout <<"your full name is: " << full_name << std::endl;

    std::cout <<" please enter your age: " << std::endl;
    std::cin >> age;
    std::cout << "Hello " << full_name << "! You are " << age << " years old." << std::endl;

}