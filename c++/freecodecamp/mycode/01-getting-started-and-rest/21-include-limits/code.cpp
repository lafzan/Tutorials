#include <iostream>
#include <limits>

int main(){

    //short numeric limits
    std::cout << std::endl;
	std::cout << "the range of short int is from " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;


    //signed short numeric limits
    std::cout << std::endl;
    std::cout << "the range of signed short int is from " << std::numeric_limits<signed short>::min() << " to " << std::numeric_limits<signed short>::max() << std::endl;

    //unsigned short int numeric limits
    std::cout << std::endl;
    std::cout << " the range of unsigned short int numeric limits are from " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << std::endl;

    //int numeric limits
    std::cout << std::endl;
    std::cout << "the range of int is from " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;

    //signed int numeric limits
    std::cout << std::endl;
    std::cout << "the range of signed int is from " << std::numeric_limits<signed int>::min() << " to " << std::numeric_limits<signed int>::max() << std::endl;

    // unsigned int 
    std::cout << std::endl;
    std::cout << " the range of unsigned int is from " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << std::endl;
    // long int numeric limits
    std::cout << std::endl;
    std::cout << "the range of long int is from " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;

    // unsigned long int numeric limits
    std::cout << std::endl;
    std::cout << "the range of unsigned long int is from " << std::numeric_limits<unsigned long>::min() << " to " << std::numeric_limits<unsigned long>::max() << std::endl;

    // signed long 


    std::cout << std::endl;
    std::cout << "the range of signed long int is from " << std::numeric_limits<signed long>::min() << " to " << std::numeric_limits<signed long>::max() << std::endl;


    //float 

    std::cout << std::endl;
    std::cout << " the range of float is from " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() <<std::endl;

    std::cout << std::endl;
    std::cout <<  "the range of float(lowest) is from " <<std::numeric_limits<float>::lowest() << " to " << std::numeric_limits<float>::max() << std::endl;

    //char

    std::cout << std::endl;
    std::cout <<  "the range of char(lowest) is from " <<std::numeric_limits<char>::min() << " to " << std::numeric_limits<char>::max() << std::endl;

    //Other facilities
    //More info : https://en.cppreference.com/w/cpp/types/numeric_limits
    std::cout << std::endl;

    std::cout << "int is signed : " << std::numeric_limits<int>::is_signed << std::endl;
    std::cout << "int digits : " << std::numeric_limits<int>::digits << std::endl;
    return 0;
}