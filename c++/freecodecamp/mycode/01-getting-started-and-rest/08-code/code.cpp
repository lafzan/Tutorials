#include <iostream>

int main() {
    int value1 {10};
    int value2 {-10};
    std::cout << "value 2 : " << value2 << std::endl;

    signed int value3 {20};
    signed int value4 {-30};

    unsigned int value5 {353};
    unsigned int value6 {2342};

    short short_var {-32768};  // 2 bytes
    short int short_int {455};  // 2 bytes
    signed short signed_short {122};  // 2 bytes  8 bit 1 bit for sign 7 bit for number 2^7 
    signed short int signed_short_in {-456};   
    unsigned short int unsigned_short_int {456};



}