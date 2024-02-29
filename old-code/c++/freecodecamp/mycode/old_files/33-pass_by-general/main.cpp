#include <iostream>


void say_age (int age) ;
void say_age1 (int *age);
void say_age2 (int &age);



void say_age_v2(int age) ;
void say_age1_v2(int *age);
void say_age2_v2(int &age);
int main(){

    int age {23};
    int *p_age{&age};
    int &r_age (age);
/* 
    std::cout << " the age before the call is : " << age << "the address is : " << &age <<std::endl;
    say_age(age); // copy
    std::cout << " the age after the call by copy is : " << age  << "the address is : " << &age<< std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
        std::cout << " the age before the call is : " << age << "the address is : " << &age <<std::endl;

    say_age1(p_age);  // pointer
        std::cout << " the age after the call by pointer is : " << age  << "the address is : " << &age<< std::endl;
 std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
        std::cout << " the age before the call is : " << age << "the address is : " << &age <<std::endl;

    say_age2(r_age); // ref
    

    std::cout << " the age after the call by ref : " << age  << "the address is : " << &age<< std::endl;
*/

// pass by point and pass by ref sanki farksız gibi, ama biliyoruz ki ref = const pointer, şimdi bu const olayı üzerine gidelim.
// referance vermişsen eğer başka bir variable a reference edemezsin bu özelliğin üzerine gidelim



    std::cout << " the age before the call is : " << age << "the address is : " << &age <<std::endl;
    say_age_v2(age); // copy
    std::cout << " the age after the call by copy is : " << age  << "the address is : " << &age<< std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << " the age before the call is : " << age << " the address is : " << p_age <<std::endl;
    say_age1_v2(p_age);  // pointer
    std::cout << " the age after the call by pointer is : " << *p_age  << "the address is : " << p_age<< std::endl;
    
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << " the age before the call is : " << age << "the address is : " << &r_age <<std::endl;
    say_age2_v2(r_age); // ref
    std::cout << " the age after the call by ref : " << age  << "the address is : " << &r_age<< std::endl;


return 0;

}

/*

void say_age (int age) {
    ++age;
    std::cout << "Your age is : " << age << " and the adress is call by copy the address is " << &age << std::endl;
}
void say_age1 (int *age){
    ++(*age);
    std::cout << "Your age is : " << *age << " and the adress is call by point " << age << std::endl;
}
void say_age2 (int &age){
    ++age;
    std::cout << "Your age is : " << age << " and the adress is call by ref " << &age << std::endl;
}

*/

void say_age_v2 (int age) {
    int new_age = 30;
    std::cout << "inside the function " << std::endl;
    std::cout << "address of the new assigned variable is : " << &new_age << std::endl;


        std::cout << "address of the age before new_age assignment is : " << &age << std::endl;

    age = new_age;
    std::cout << "address of the age after new_age assignment is : " << &age << std::endl;
    
    std::cout << "Your age is : " << age << " and the adress is call by copy the address is " << &age << std::endl;
}
void say_age1_v2 (int *age){
        int new_age = 30;
        std::cout << "inside the function " << std::endl;
        std::cout << "address of the new assigned variable is : " << &new_age << std::endl;
    std::cout << "address of the age before new_age assignment is : " << age << std::endl;

        *age = new_age;
    std::cout << "address of the age after new_age assignment is : " << age << std::endl;

    std::cout << "Your age is : " << *age << " and the adress is call by point " << age << std::endl;
}
void say_age2_v2 (int &age){
        int new_age = 30;
        std::cout << "inside the function " << std::endl;
        std::cout << "address of the new assigned variable is : " << &new_age << std::endl;
        std::cout << "address of the age before new_age assignment is : " << &age << std::endl;

        age = new_age;
        std::cout << "address of the age after new_age assignment is : " << &age << std::endl;
    std::cout << "Your age is : " << age << " and the adress is call by ref " << &age << std::endl;
}
