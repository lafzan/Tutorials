#include <iostream>
#include "AddressBook.h"
#include <iomanip>
#include <type_traits>
void welcomeMessage();
void displaySpaces(const size_t n);
void displayMenu ();
void askForUserInput();
size_t getUserInput();
void callMethod(size_t i, AddressBook& addressbook);



int main() {

 

 size_t userInput {};
AddressBook addresbook1;

    // welcome message for the user. Something line , Welcome to the addressbook application. 
while (true) {
    // burada kayıttan yükleme işi yapılabilir.

    welcomeMessage();
    displaySpaces(2);
    displayMenu();
    askForUserInput();
    userInput = getUserInput();
    if (userInput == 6) {
        // some kayıt işlemi burada yapılabilir.
        break;
    }
    callMethod(userInput,addresbook1);
}


    
    return 0 ;
}
void welcomeMessage() {
    std::cout << "Welcome to the Addressbook " << std::endl;
}


void displaySpaces(const size_t n) {
    for (size_t i{0}; i<n; ++i ){
        std::cout << std::endl;
    }

}
void displayMenu ()  {
    std::cout << " Following Options are available: " << std::endl;
    std::cout << std::endl;
    std::cout << "1- Create New User      :"  << std::setw(10) << "(Input 1)" << std::endl;
    std::cout << "2- Delete Existing User :"  << std::setw(10) << "(Input 2)" << std::endl;
    std::cout << "3- Search User By Name  :"  << std::setw(10) << "(Input 3)" << std::endl;
    std::cout << "4- Display User Info    :"  << std::setw(10) << "(Input 4)" << std::endl;
    std::cout << "5- Display All Users    :"  << std::setw(10) << "(Input 5)" << std::endl;
    std::cout << "0- Exit the program     :"  << std::setw(10) << "(Input 0)" << std::endl; 
}

void askForUserInput(){
    std::cout << "please enter the option that you like to select!" << std::endl;
}

size_t getUserInput(){
    size_t input;
    std::string line;

    while (true) {
        // ask for user input
        std::cout << "Please enter your input [0 - 5] or please type 'exit' for quit" << std::endl;
        std::getline(std::cin,line);

        // check if user wants to exit 
        if ((line == "exit") || line == ""){
            std::cout << "exiting before taking input ....." << std::endl;
            input = 6;
            break;
        }

        // check if user enter an input correctly

        try {
            //try to conver input to size_t

            input = std::stoull(line);
            if (!((input <= 5) && (input >= 0))){
                throw std::runtime_error("Please enter a number between 0 and 5.");
            }
            break;

        } catch (const std::exception& e) {
            std::cerr << "Invalid input! Please enter a valid value between [0-5]" << std::endl;
            displaySpaces(2);
            displayMenu();
            std::cerr << "Error : " << e.what() << std::endl;

        }


        
    }
    return input;
}


void callMethod(size_t i, AddressBook& addressbook) {

    switch (i) {

        case 1: {
        

            // burada bir loop çağırıp aslında user ın loopdan çıkacana kadar input girmesine olanak tanımak lazım. Yanlış girerse tekrar tekrar dener.
        Contact contact1;
        std::string selection;
        size_t selectionInt;
        std::cout << "Welcome to Add New Contact Part!, You can create a new contact with the following info" << '\n';
        std::cout << "1 - Name" << '\n'; 
        std::cout << "2 - Phone Number" << '\n'; 
        std::cout << "3 - E-Mail" << '\n'; 
        std::cout << "4 - Address" << '\n'; 
        std::cout << "5 - Display Contact Info" << '\n';
        // display menu seçeneği gelsin buraya yoksa olmaz.
        while (true) {

        std::cout << "Please select the type of information that you want to add to your contact. If you are finished, please type 'ok' or 'OK' to save the contact" << '\n';       
        // clear comomand line seçeneği koymam lazım kesinlikle. hatta while loop ile input aldığım her yere. Clear yazınca termainali silecek.

        std::getline(std::cin,selection);
        try {
            if ((selection == "ok") || (selection == "OK") || (selection == "")) {
                std::cout << "Are you sure that you want to finish the process ? Y/N or y/n " << '\n';
                std::string y_or_n;
                std::getline(std::cin,y_or_n);
                const char firstChar = y_or_n.at(0);
                if ((firstChar == 'Y') || (firstChar == 'y')) {
                    break;
                } else {
                    continue;
                }
            }
            selectionInt = std::stoull(selection);
            if (!((selectionInt >= 1) && (selectionInt <= 5))) {
            
                throw std::runtime_error("please enter a number between 1 and 5");
            }
        } catch(const std::exception& e) {
            std::cerr << "The input type is wrong " << '\n';
            std::cerr << "Error : " << e.what() << '\n';
        }

        switch (selectionInt) {
            case 1: {
                contact1.setName(); 
                //contact1.displayName()
            }
            break;
            case 2: {
                contact1.setPhoneNumber(); 
                //contact1.displayPhoneNumber) 
            }
            break;

            case 3: {
                contact1.setEmail(); 
                //contact1.displayEmail() 
            }
            break;

            case 4: {
                contact1.setAddress(); 
                //contact1.displayAddress()
            }
            break;

            case 5: {
                contact1.display(); 
            }
            break;

        }
          

   
      
        } ;

      

        // loop burada bitecek.
        // id için contact class ının içinde yer yeni instantiationda artan bir counter tutmak lazım ya daa addrssbook içindeki contact syısını id ye eşiyetleyen
        // method yazmak lazım. Bence bu ikincisi daha iyi. 
        addressbook.addContact(contact1);

        }
        break;
        case 2: {
        // delete operasyonundan sonra tüm contactların id sini değiştiren bir method yazmak lazım.
        // Delete için de bir loop yazmak lazım. 
        // 


        }
        break;
        case 3: {

            // burada bir loop yaratıp user aramaya devam etmek istedikçe devam etmesine izin vermek lazım!!!

        addressbook.searchContact();
        }
        break;
        case 4: {

        }
        break;
        case 5: {

        }
        break;
        default: {

        }
    }
    
}

