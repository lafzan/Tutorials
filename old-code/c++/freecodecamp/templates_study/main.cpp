#include <iostream>

using namespace std;
int main() {


 // UNIQUE PTR 

/*
unique_ptr<int> myUniquePtr(new int(42));
int * ptr = new int();

//ptr = myUniquePtr; cannot assign to a unique_ptr  case: ptr with new command
//int * ptr1 = myUniquePtr ;  cannot assign    case: ptr from stack memory
int value = *myUniquePtr;
//myUniquePtr.reset(new int(10));
ptr = &value;  

cout << myUniquePtr << " and "  << *myUniquePtr << '\n';
cout << '\n';
cout <<"raw int with heap memory" << ptr << " and "  << *ptr << '\n';

cout <<"raw int with stack memory" << ptr1 << " and "  << *ptr1 << '\n';

cout <<"stack variable " << &value << " and "  << value << '\n';
*/

// a small experiment 


// craeting an int value
// int a {42};         //  exp1


// creating a new int ptr 

int *a = new int (42);


// creating two ptr from stack.

int *ptrInt1{a};
int *ptrInt2{a};

int b {45};


ptrInt2 = &b;
// lets check which address they sit.


cout << "address of a " << &a <<"the value is : " << a << endl;
cout << "adddress of ptr1 " <<ptrInt1 << "the value is : " << *ptrInt1 << endl;
cout << "address of ptr2 " << ptrInt2 <<"the value is : " << *ptrInt2  << endl;


return 0;


}