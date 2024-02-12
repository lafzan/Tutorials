#include <iostream>

void enter_bar(size_t age)
 {
        if (age>= 18) {
            std::cout << "age is " << age << " and you can enter the bar" << std::endl;
        }else {
              std::cout << "age is " << age << " and you cannot enter the bar" << std::endl;

        }
    return;
 }

int min (int a , int b) {
    if (a<b) {
        return a;
    }else {
        return b;
    }
}

int max (int a , int b) ;
int main () {
    enter_bar(22);
 
    int c = max(2,4);
    std::cout << c << std::endl;
double f {13.53};
double g {11.34};

std::cout << min(f,g) << std::endl;

// bi check et bakalım conversion yapıyor mu . Int veriyor sanırı mcevabı.
    return 0 ;
}

int max (int a , int b) {
    if (a>b) {
        return a;
    }else {
        return b;
    }
}