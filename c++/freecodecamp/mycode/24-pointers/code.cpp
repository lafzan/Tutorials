#include <iostream>

int main() {
   /*
    int *p_num ber {}; // always init your pointer // this is a nullptr
    double *p_fractional_number {}; // init nullptr implicitly

    int *p_number1 {nullptr};
    double *p_fractional_numbers1{nullptr};

    std::cout << sizeof(double*) << std::endl;

    // 
 
    int int_var {43};
    int *int_var_p {&int_var};

    std::cout << "int_var is : " << int_var << std::endl;
    std::cout <<  "pointer of int_var is : " << int_var_p << std::endl;
 
    int int_var1 {65};
    int_var_p = &int_var1;
    std::cout <<  "pointer of int_var1 is : " << int_var_p << std::endl;


//pointer declerations

int *int_pntr{};
int *int_pntr1{nullptr};

// let have some integers

int int_var {23};
int int_var1 {45};

std::cout << "int_pntr is : " << int_pntr << std::endl;
std::cout << "int_pntr1 is : " << int_pntr1 << std::endl;
std::cout << "int_var  is : " << int_var << std::endl;
std::cout << "int_var1 is : " << int_var1 << std::endl;


// address assignment in creation

int *int_var_pntr{&int_var};

std::cout << "int_var_pntr is : " << int_var_pntr << std::endl;

std::cout << std::endl;
// addresses can be changed later on;

int_var_pntr = &int_var1; // address of int_Var1 is assigned to in_var_pntr

std::cout << "int_var_pntr is (changed the address) : " << int_var_pntr << std::endl;
   

    //Dereferencing a pointer

    int *p_int2 {nullptr};
    int int_data {56};

    p_int2 = &int_data;

    std::cout << "value is " << *p_int2 << std::endl;

    //pointer to char

    char *p_char_var {nullptr};
    char char_var {'A'};

    p_char_var = &char_var;

    std::cout << *p_char_var<< std::endl;
// initialize with string literal

    const char * p_message {"Hello World"};
    std::cout << p_message << std::endl;

    std::cout << "the value stroed at p_message is : " << *p_message << std::endl;

    // string literal is made up of const char so don't try to reassign pointer for char 

    // .............----------------------......................----------------------................


    // DYNAMIC MEMORY ALLOCATION
int number {22}; // stack

int *pNumber = &number; // pointer decleration


std::cout << *pNumber << std::endl;

std::cout << &number << std::endl;

int * p_somevar {nullptr};

p_somevar = new int;


*p_somevar = 77;

std::cout << *p_somevar << std::endl;
std::cout << p_somevar << std::endl;


delete p_somevar;
p_somevar = nullptr;
*/

//DANGLING POINTER



// When "new" fails

//int * data = new int[10000000000000000]; // we cannot use this much amount of heap memory. 


/*
for (size_t i{}; i < 10000000 ; ++i) {
    int * data = new int [10000000];
}
std::cout << "Program ending well" << std::endl;


//exception mechanism
try {
    
for (size_t i{}; i < 10000000 ; ++i) {
    int * data = new int [10000000];
}
}catch (std::exception& ex){

    std::cout << "I catch an error" << std::endl;
}
//std::nothrow

for (size_t i{}; i < 10000000 ; ++i) {
    int * data = new(std::nothrow) int [10000000];

}

//int *p_number {new int{13}}; // init to nullptr
int *p_number {};
if(!(p_number == nullptr)){

    std::cout << " no nullptr" << std::endl;
} else {
    std::cout << "yes nullptr"<< std::endl;
}


delete p_number;
p_number = nullptr;


int *p_number1 {};

delete p_number1;


size_t size{10};

double *p_salaries {new double[size]}; //garbage values
int *p_students{ new(std::nothrow) int [size] {} } ;// all init to 0;

double *p_scores {new(std::nothrow) double [size]{1,2,3,4,5}}; // rest is 0.

std::cout << "p_salaries is " << p_scores << std::endl;

std::cout << std::endl;
delete [] p_salaries;
p_salaries = nullptr;

delete[] p_students;
p_students = nullptr;

delete[] p_scores;
p_scores = nullptr;

// static vs dynamic arrays

int scores[10] {1,2,3,4,5,6};
int *p_scores = new(std::nothrow) int[10] {1,2,3,4,5};
std::cout << std::size(scores) << std::endl;

for (auto s : scores) {
    std::cout << s << std::endl;
}

for (size_t i{} ; i <10; ++i) {
        std::cout <<i << "'th element is : "<< *(p_scores+i) << std::endl;
}
std::cout << sizeof(scores) << std::endl;

std::cout << sizeof(*p_scores) << std::endl;

*/

// ARRAY and POINTERS
int ahmet[10] {1,2,3,4,5,6,7,8,9,0};
int *p_arr {ahmet};
int *dyn_arr{ new(std::nothrow) int[10]{1,2,3,4,5,6,7,8,9,0}};

std::cout << *++dyn_arr << std::endl;
std::cout << *--dyn_arr << std::endl;




     return 0;
}