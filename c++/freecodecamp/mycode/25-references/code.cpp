#include <iostream>

int main() {

    /*
    int int_data {33};
    double double_data {55};

    //References

    int& ref_int_data {int_data};
    double& ref_double_data {double_data};

    std::cout << ref_int_data << std::endl;
    std::cout << ref_double_data << std::endl;

       std::cout << &ref_int_data << std::endl;
    std::cout << &ref_double_data << std::endl;
        std::cout << &int_data << std::endl;
    std::cout << &double_data << std::endl; 



           std::cout <<sizeof( ref_int_data) << std::endl;
    std::cout << sizeof(ref_double_data )<< std::endl;
        std::cout << sizeof(int_data) << std::endl;
    std::cout << sizeof(double_data) << std::endl; 



    ref_int_data = 5;

    ref_double_data = 232.23;

       std::cout << ref_int_data << std::endl;
    std::cout << ref_double_data << std::endl;
       std::cout << int_data << std::endl;
    std::cout << double_data << std::endl;

*/
    // const and ref

/*
    std::cout << std::endl;
    int age {27};
    int& ref_age{age};

    std::cout << "age" << " " << age << std::endl;
    std::cout << "ref_age " << ref_age << std::endl;

    ref_age++;
        std::cout << "age" << " " << age << std::endl;
    std::cout << "ref_age " << ref_age << std::endl;
    
    std::cout << std::endl;
    int age {27};
    const int& ref_age{age};

    std::cout << "age" << " " << age << std::endl;
    std::cout << "ref_age " << ref_age << std::endl;

    age++;
    std::cout << "age" << " " << age << std::endl;
    std::cout << "ref_age " << ref_age << std::endl;
    
    // const pointer
    std::cout << std::endl;
    int age {27};
    const int*   p_age {&age}; // reference ile aynı
    int age1 {24};
    std::cout << "age" << " " << age << std::endl;
    std::cout << "ref_age " << *p_age << std::endl;

   p_age = &age1;
    std::cout << "age" << " " << age << std::endl;
    std::cout << "ref_age " << *p_age << std::endl;
    // const pointer
    
*/
int scores [] {1,2,3,4,5,6,7,8,9,10};
std::cout << std::endl;

std::cout << "Scores : " << std::endl; ;
for (auto score : scores ) {
    std::cout <<" " <<  score ;
}

std::cout << std::endl;

for (auto score : scores) {
    score = score* 10;    // ulan tam tersi değiştirmek için sike sike 
    // sike sike kulllanmak zorundaymış 
}

//printing after the change

std::cout << std::endl;

std::cout << "Scores : " ;

for(auto score : scores) {
    std::cout << " " << score;
}
std::cout << std::endl;
return 0; 
}