#include <iostream>
#include <concepts>

//Syntax 1
/*
template <typename T>
requires std::integral<T>
*/
/*
template <std::integral T>  // syntax 2
*/
auto add (std::integral auto a, std::integral auto b) {
    return a+b;
}

/*
template <typename T>
const T add(const T &a, const T &b) requires std::integral <T>{ // syntax 4 
    return (a+b);
}
*/

int main() {
int a {4};
int b {3};

double c {4};
double d {6};
double e = add(a,b);
std::cout << e << std::endl;
return 0;
}