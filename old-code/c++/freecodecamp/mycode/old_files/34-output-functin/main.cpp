#include <iostream>
#include <string>
void max_str (const std::string &str1, const std::string str2, std::string &output);
void max_int (int a, int b , int &output) ;
void min_int (double a, double b , double *output);
int main() {
    std::string str1 = {"mmahmetafa"};
    std::string str2 = {"mehmet"};
    std::string output= "";
    double output1 {};
    double * p_output{&output1};
    int maxint{};
    max_str("zzefe","zdddsfdsf",output);
    std::cout << output << std::endl;
    max_int(5,2,maxint);
    std::cout << maxint<< std::endl;
    min_int(23,2,p_output);
        std::cout << *p_output<< std::endl;

    return 0;
}

void max_str (const std::string &str1, const std::string str2, std::string &output) {


    if(str1 > str2) {
        output = str1;
    } else {
        output = str2;
    }
}

void max_int (int a, int b , int &output) {
    if(a > b) {
        output = a;
    } else {
        output = b;
    }

}

void min_int (double a, double b , double *output) {

      if(a < b) {
        *output = a;
    } else {
        *output = b;
    }
}