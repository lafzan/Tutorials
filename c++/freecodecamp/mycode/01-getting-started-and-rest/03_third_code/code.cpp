#include <iostream>

int addNumbers (int first_number, int second_number) {
    int sum = first_number + second_number;
    return sum;
}
int multiplyNumbers( int first_number, int second_number) {
    int multip = first_number*second_number;
    return multip;
}
int main() {
    int first_number {13};
    int second_number {7};

    std::cout << "First Number :" << first_number << std::endl;
    std::cout << "Second Number :" << second_number << std::endl;

    int sum = addNumbers(first_number,second_number);
    std::cout << "Sum : " << sum << std::endl;

    sum = addNumbers(25,7);
    std::cout << "Sum : " << sum << std::endl;

    std::cout  << "Sum : " << addNumbers(3,42) << std::endl;
    std::cout <<  "Result: " << multiplyNumbers(3,2) << std::endl;
    return 0;
}