#include <iostream>
#include <cstring>
#include <string>
/*
template <typename T> void maximum (T a, T b) {
    T c = (a>b)? a : b;
    std::cout << "The max betweeen " << a << " and " << b << " is " << c << std::endl;
}
*/

template <typename T>
const T& maximum(const T& a, const T& b) {
    const T& c = (a > b) ? a : b;
    std::cout << "the maximum is : " << c << std::endl;
    return c;
}

// Specialization for const char* (C-style strings)
template <>
const char* maximum <const char*>(const char* a, const char* b) {
    const char* c = std::strcmp(a, b) > 0 ? a : b;
    std::cout << "the maximum is : " << c << std::endl;
    return c;
}

int main() {
    // Test with integer values
    maximum(10, 20);

    // Test with floating-point values
    maximum(3.14, 2.71);

    // Test with strings
    maximum("hello", "world");

    return 0;
}
