#include <iostream>

int main() {
/*
    std::cout << std::endl;
    std::cout << "Raw variable that can be modified : " << std::endl;
	
    int number {5};// Not constant, can change number any way we want
    std::cout << "number : " << number << std::endl;
	std::cout << "&number : " << &number << std::endl;
    //Modify
    number = 12;
    number += 7;
    
    //Access - Print out
    std::cout << "number : " << number << std::endl;
	std::cout << "&number : " << &number << std::endl;
    std::cout << std::endl;

    int *p_number1 {nullptr};
    int number1 {23};

    p_number1 =&number1;
    std::cout << "Pointer and value pointed to : both modifable : " << std::endl;

    std::cout << "p_number1 : " << p_number1 << std::endl;
    std::cout << "*p_number1 : " << *p_number1 << std::endl;
    std::cout << "number1 : " << number1 << std::endl;

    std::cout << std::endl;
    std::cout << "Modifying the value pointed to p_number1 through pointer : " << std::endl;
    *p_number1 = 432;
    std::cout << "p_numbr1 : " << p_number1 << std::endl;
    std::cout << "*p_number1 : " <<*p_number1 << std::endl;
    std::cout << "number1 : " << number1 <<std::endl;

    // change the pointer itself to make it point somewhere else

    std::cout << std::endl;
    std::cout << "Changing the pointer itself to make it point somewhere else" << std::endl;

    int number2 {56} ;
    p_number1 = &number2;

    std::cout << "p_number1 : " << p_number1 << std::endl;
    std::cout << "*p_number1 : " << *p_number1 << std::endl;
    std::cout << " number1 : " << number1 << std::endl;
    std::cout << " number2 : " << number2 << std::endl;
    std::cout << std::endl;
*/

    //pointer to const

    std::cout << "Pointer is modifiable pointed to value is constant : " <<std::endl;

    int number3 {632};

    const int *p_number3{&number3};

    std::cout << "p_nmber3 : " << p_number3 << std::endl;
    std::cout << "*p_number3 : " << *p_number3 << std::endl;

    std::cout << std::endl;
    std::cout << "Modifying the value pointed to by p_number3 through the pointer (Compile Error) : " << std::endl;
    number3 = 444;
    //*p_number3 = 444;

    std::cout << "but directly changing the variable will not give you compiler error : " << *p_number3  <<std::endl;

    std::cout << std::endl;
    std::cout << "Changing the address pointed to by p_number3 : " << std::endl;
    int number4 {872};
    p_number3 = &number4;


    std::cout << "p_number3 : " << p_number3 << std::endl;
    std::cout << "*p_number3 : " << *p_number3 << std::endl;

    std::cout << std::endl;




   







    return 0 ;

}