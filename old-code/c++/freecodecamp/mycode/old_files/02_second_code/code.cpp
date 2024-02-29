#include <iostream>
int addNumbers(int firstNumber, int secondNumber) {
        int sum = firstNumber + secondNumber;
        return sum;
    }
    
int main() {
    
   

    int sum = addNumbers(12,9);
    std::cout << "the sum is: " << sum << std::endl;
    return 0;
}
