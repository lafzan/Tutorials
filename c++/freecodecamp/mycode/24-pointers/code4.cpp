#include <iostream>

int main() {


     const  char * const   students [] {
        "Daniel Gray",
        "Tuna Philbe",
        "The Rock",
        "Kumar Singh",
        "Sam Ali",
        "Dave Mahoro"
    };

    for (const char * student : students) {
      
        std::cout << student  <<std::endl;
    }

    return 0;
}