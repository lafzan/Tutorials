#include <iostream>
#include <limits>
int main() {
    /*
    for (unsigned int i{0}; i< 10 ; ++i) {
        std::cout << i << std::endl;
    }

    for (size_t i{0} ; i<10 ; ++i) {
        std::cout << i << " I love C++ " << std::endl;
    }
    
    std::cout << sizeof(size_t) << std::endl;


    //scope of the iterator
    size_t i {};
    const size_t counter {10}
        std::cout << "before entering the loop i is : " << i <<std::endl;

    for (; i < counter ; ++i) {
       std::cout << "inside  the loop i is : " << i <<std::endl;
    }
    std::cout <<"after the loop i is : " << i <<std::endl;

    

   const size_t count {10};
   size_t i {0};

   while (i<count) {

    std::cout << "i is : " << ++i << std::endl;
   }
    i = 0;

   while (i<count) {

    std::cout << "i is : " << i++ << std::endl;
   }
    */
   // do while loop
   const size_t COUNT{10};
   size_t i {0};
   do {
    std::cout << "i is : " << i << std::endl;
    ++i;

   }    while (i < COUNT); 

}