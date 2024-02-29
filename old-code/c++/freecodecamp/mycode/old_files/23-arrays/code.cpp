#include <iostream>
#include <ctime> 
#include <cstdlib>
int main() {

    /*
    //declaring and using arrays
    int score [10];

    for (size_t i{}; i< 10 ; ++i) {
        std::cout << score[i] << std::endl;
    }

    // declare and initialize  at the same time.

    std::cout << std::endl;
    std::cout << "Declare and initialize at the same time : " << std::endl;

    double salaries[5] {12.7 , 7.5, 13.2, 8.1 , 9.3};
    for(size_t i{0}; i<5; ++i) {
        std::cout << "salary[" << i << "] " << salaries[i] << std::endl;
    }

    
   // omit the size of the array at declaration.

   int class_sizes [] {10 , 12 ,121, 4,11};

   for (auto value : class_sizes) {
    std::cout << "value " << value << std::endl;
   }

   // constant arrays

   const int multipliers [] {22,30,15};

   // operations on data stored in arrays

   int sum {0};
   for(int i : class_sizes) {
    sum+= i;
   }
   std::cout << sum << std::endl;

   

  // decleraton during init with ommitting values. Rest is assigned as 0.

  double salaries[5] {12 , 7.5, 13.2};
    for(size_t i{0}; i<5; ++i) {
        std::cout << "salary[" << i << "] " << salaries[i] << std::endl;
    }
    

   int scores [] {10,12,15,11,18,17,22,23};

   //std::cout << "scores size: " << std::size(scores) << std::endl;

   std::cout << "size of scores " << sizeof(scores) << std::endl;
   std::cout << "size of scores " << sizeof(scores[1]) << std::endl;
   std::cout << "size of scores " << (sizeof(scores)/sizeof(scores[0])) << std::endl;

   

  // null termination
  char message [] {'H', 'e', 'l','l','o', '\0'};
  std::cout <<"message " << message << std::endl;

  char message1 [] {"Hello World"};
  std::cout << message1 << std::endl;
  for (auto char1 : message1) {
    std::cout << char1 << std::endl;
  }
  


//  generating random numbers

std::srand(std::time(0)); // Seed

int random_num = std::rand();

std::cout << "random_num : " << random_num << std::endl;

random_num = std::rand();
std::cout << "random_num : " << random_num << std::endl;


//generate random number in a loop

int random_num;
for (size_t i{0}; i<20; ++i) {
    random_num = std::rand();
    std::cout << "random_num " << i << " : " << random_num << std::endl;
}

std::srand(std::time(0)); // Seed

int random_num = std::rand() % 101;
for (size_t i{0}; i < 50 ; ++i) {
     random_num = std::rand()%101;
    std::cout << "random_num " << i << " : " << random_num << std::endl;   
}

*/

int packages[3][4]{
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},

};
/*
for (size_t i{0}; i< 3 ; ++i) {
    for (size_t j{0}; j<4; ++j) {
        std::cout<< i+1 << "'th rows " << j+1 << "'th element is : " << packages[i][j] <<std::endl;
    }
}

//use std::size() for size of arrays

for (size_t i{}; i< std::size(packages) ; ++i) {
    for (size_t j{}; j < std::size(packages[i]); ++j) {
        std::cout<< i+1 << "'th rows " << j+1 << "'th element is : " << packages[i][j] <<std::endl;

    }
}


int house_block [2][3][4] {
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    },
    { 
        {13,14,15,16},
        {17,18,19,20},
        {21,22,23,24}
    }
};
for (size_t i{}; i< std::size(house_block);++i){
    for(size_t j{}; j < std::size(house_block[i]); ++j) {
        for (size_t k{}; k < std::size(house_block[i][j]); ++k){
            std::cout << i +1 << "'th block's "<< j + 1  << "'s house " << k + 1 << "'th light bulb no is " << house_block[i][j][k] << std::endl;
        }
    }
}



int tripletTrial [][3] {
    
    {1,2,3},
    {4,5,6},
    {7,8,9},
    {10,11,12},
    {13,14,15},
    {16,17,18}
    

};

int packages2 [] [5] {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12},
		{100,110,120} // Can add as many triplets in packages2 as we want but the last two values will be 
                    // assigned as 0 for each row so be careful...
    };
for (size_t i{}; i < std::size(tripletTrial); ++i) {
    for (size_t j{}; j < std::size(tripletTrial[i]) ; ++j){
        std::cout << tripletTrial[i][j]<< std::endl;
    }
}

for (size_t i{}; i < std::size(packages2); ++i) {
    for (size_t j{}; j < std::size(packages2[i]) ; ++j){
        std::cout << packages2[i][j]<< std::endl;
    }
}
	//For 3d and really any multi dimensional array , you have to specify
	//the number of elements in []'s , only the left most is not mandatory.
	//Below is the example for 3D reproduced.Omitting the 5 or the 3 or both
	//will cause a compile error.
    std::srand(std::time(0));
    double value = static_cast<double>(std::rand())/RAND_MAX ;
    std::cout << "random number is : " << value << std::endl;

    */

   const size_t name_length {15};
   /*
   char members [][name_length] {
        {'J','o','h','n'},
        {'S','a','m','u','e','l',},
        {'R','a','s','h','i','d'},
        {'R','o','d','r','i','g','e','z'}
   };
   */
   /*
   std::cout << "unsafe printing of members : " << std::endl; 
   for (size_t i{}; i < std::size(members) ; ++i ){
    std::cout << members[i] << std::endl;
   }
   
  std::cout << std::endl;

  for( size_t i{}; i< std::size(members); ++i) {
    for (size_t j{}; j < std::size(members[i]); ++j) {
        std::cout << members[i][j];
    }
    std::cout << std::endl;
  }

  */
  //better use C-Literals
char members [][15]{
    "John",
    "Samuel",
    "Rashid",
    "Rodrigues"
    };


for (auto i : members) {
    std::cout << i << std::endl;
}

return 0;

}