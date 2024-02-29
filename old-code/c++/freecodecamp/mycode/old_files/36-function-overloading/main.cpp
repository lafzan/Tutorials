#include <iostream>
#include <string>

int max (int a, int b);

//double max (int a, int b); => gives you an error bcs input params are the same type.

// change the order of he parameters, change the number of params or the types of the params. Any of these will work.

double max( double a, double b);
std::string_view max( std::string_view a, std::string_view b) ;

int main() {

int int_value1{41};
int int_value2{29}; 

double double_value1{47.2};
double double_value2{55.01};

std::string_view first{"Hello"};
std::string_view second{" World"};


std::cout << " max (" << int_value1 << "," << int_value2 << ") :" << max(int_value1,int_value2) << std::endl;

std::cout << " max (" << double_value1 << "," << double_value2 << ") :" << max(double_value1,double_value2) << std::endl;

std::cout << " max (" << first << "," << second << ") :" << max(first,second) << std::endl;

}


int max (int a, int b){
    return (a>b)? a : b;
};
double max( double a, double b){
    return (a>b)? a : b;
};
std::string_view max( std::string_view a, std::string_view b){
    return (a>b)? a : b;
}