#include <iostream>
#include <cstring>
#include <string>
int main() {
/*
    std::cout << std::isalnum('C') << std::endl;
    std::cout << std::isalnum('^') << std::endl;

    std::cout << std::isalpha('C') << std::endl;
    std::cout << std::isalnum('^') << std::endl;
    std::cout << std::isalnum('7') << std::endl;

    char name [] {"Ahmet mehmet himmet"};
    size_t count{};
    for (char elem : name) {

        if (std::isblank(elem)) {
            std::cout<< "-";
            count++;

        }else {
            std::cout << elem;
        }
    }

    std::cout << std::endl;
    std::cout << count << std::endl;
*/

/*
const char message1 [] {"The sky is blue."};

const char *message2  {"The sky is blue"};

std::cout << "message1 : " << message1 << std::endl;


// strlen ignores null char

std::cout << "strlen(message) : " << std::strlen(message1) << std::endl;
std::cout << "strlen(message) : " << sizeof(message1) << std::endl; 


std::cout << std::endl; 

std::cout << "strlen(message) : " << std::strlen(message2) << std::endl; 

std::cout << "strlen(message) : " << sizeof(message2) << std::endl; 


*/

/*
// strcmp

const char * string_data1 {"alabama"};
const char * string_data2 {"aaaa"};

char string_data3 [] {"Alabama"};
char string_data4 [] {"Alanama"};

std::cout << "std::strcmp( " << string_data1 << "," << string_data2 << ") : " << std::strcmp(string_data1, string_data2) << std::endl;


std::cout << "std::strcmp( " << string_data3 << "," << string_data4 << ") : " << std::strcmp(string_data3, string_data4) << std::endl;


// strncmp

size_t n{3};
std::cout << "std::strcmp( " << string_data1 << "," << string_data2 << ") : " << std::strncmp(string_data1, string_data2,n) << std::endl;


std::cout << "std::strcmp( " << string_data3 << "," << string_data4 << ") : " << std::strncmp(string_data3, string_data4,n) << std::endl;
*/

/*
// search for char in string...

const char * const str{"Try not. Do, or do not. There is no try."};
char target = 'T';
const char *result = str;
size_t iterations{};

while ((result = std::strchr(result,target)) != nullptr) {
    std::cout << "Found '" << target << "'starting at '" << result << "'\n";
    ++result;

    ++iterations;
}


*/

/*
char input[] {"/home/user/hello.cpp"};
char * output = std::strrchr(input,'/');
std::cout << output << std::endl;
if(output){
    std::cout << output+1 << std::endl;
}

*/

char dest[50] = "Hello";
char src[50] = "World!";

std::strcat(dest,src);
std::cout << "dest : " << dest << std::endl;




return 0;    
}