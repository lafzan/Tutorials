#include <iostream>

int main() {
    // braced initialization
    int elephan_count;
    int lion_count {}; // initializes to zero
    int dog_count{10};
    int cat_count{15};

    int domesticated_animals {dog_count + cat_count};
    int narrowing_conversion(2.9);
    //functional variable initialization

    int apple_count(429496729);

    // assignment initialization 

    int bike_count = 2;

    std::cout << "elephant number is: " << elephan_count << std::endl;
    std::cout << "lion count is : " << lion_count << std::endl;
    std::cout << "dog count is : " << dog_count << std::endl;
    std::cout << "cat count is : " << cat_count << std::endl;
    std::cout << "domes count is : " << domesticated_animals << std::endl;
    std::cout << "narrowing conversion is " << narrowing_conversion << std::endl;
    std::cout << "apple count is " << apple_count << std::endl;

    // check the size with sizeof()

    std::cout << "size of int : " << sizeof(int) << std::endl;
    std::cout << "size of apple count : " << sizeof(apple_count) << std::endl;
}