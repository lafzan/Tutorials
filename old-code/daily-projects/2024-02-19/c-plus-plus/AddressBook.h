#include <iostream>
#include <algorithm>
#include "Contact.h"
#include <vector>


class AddressBook {

    private:
        std::vector<Contact> contacts;

    public: 
    //constructor
    AddressBook() {};

    // add contact
    void  addContact(const Contact& contact1) {
        contacts.push_back(contact1);
    }

    // remove contact
    void removeContact(size_t id) {
        auto it = std::find_if(contacts.begin(),contacts.end(),[id](const Contact& c){
            return c.getID() == id;
        });

        if (it != contacts.end()) {
            contacts.erase(it);
            std::cout << "Contact with ID " << id << " removed successfull!" << std::endl;
        } else {
            std::cout << "Contact with ID " << id << " cannot found!" << std::endl;
        }
    }

    // search contact by name
    void searchContact() {
        std::string name;
        size_t counter{0};
        std::cout << "please enter the name that you want to search for" << std::endl;
        std::getline(std::cin,name);
        std::cout << "Search results for /" << name << " /: " << std::endl;
        for(const Contact& c : contacts) {
            if (c.getName() == name){
                c.display();
                counter++;
            }
         
        }
        if (counter == 0) {
            std::cout<< "the name does not exist in the address book" << std::endl; 
        }

    }
    // display all contacts by name
    void displayAll() const {
        for (const Contact& c : contacts) {
            c.display();
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
        }
    }

};