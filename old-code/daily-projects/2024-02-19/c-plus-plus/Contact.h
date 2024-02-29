#include <iostream>
#include <string>


class Contact {
    private:
        size_t id;
        std::string* name;
        std::string* phoneNumber;
        std::string* email;
        std::string* address; 

    public:
         Contact
                (
                const std::string& nameVal = "", 
                const std::string& phoneNumberVal = "",
                const std::string& emailVal =  "",
                const std::string& addressVal = "",
                const size_t idVal = 1  
                ):
                id(idVal) 
                {
                    name = new std::string(nameVal);
                    phoneNumber = new std::string(phoneNumberVal); 
                    email = new std::string(emailVal);
                    address = new std::string(addressVal);
                }

        Contact(const Contact& other)
                : id(other.id) {
                name = new std::string(*other.name);
                phoneNumber = new std::string(*other.phoneNumber);
                email = new std::string(*other.email);
                address = new std::string(*other.address);
        
        }

        Contact& operator=(const Contact& other) {
        if (this != &other) {  // Avoid self-assignment
            // Copy data from 'other' to 'this'
            *name = *other.name;
            *phoneNumber = *other.phoneNumber;
            *email = *other.email;
            *address = *other.address;
            id = other.id;
        }
        return *this;
        }

        // ---------------------------------------------------------------- GETTER FUNCTIONS ----------------------------------------------------------------  // 
       
        std::string& getName () const {
            return *name;
        }
        std::string& getPhoneNumber () const {
            return *phoneNumber;
        }
        std::string& getEmail () const {
            return *email;
        }
        size_t  getID () const {
            return id;
        }
        // ---------------------------------------------------------------- SETTER FUNCTIONS ----------------------------------------------------------------  // 

        void setName ()  {
            delete name;
            std::string val;
            std::cout << "please enter the name of the contact" << std::endl;
            std::getline(std::cin,val);
            name = new std::string(val);
        }
        void setPhoneNumber ()  {
            delete phoneNumber;
            std::string areaCodeLine;
            std::string numberLine;
            size_t someNumber;

            while (true) {
                
                std::cout << "please enter the area code of the phone number Ex :If the phone number is in Turkey, please enter 90" << '\n';
                std::cout << "To exit, please type 'exit' or press enter without writing anyting" << '\n';

                std::getline(std::cin,areaCodeLine);
                // check for exit request
                if ((areaCodeLine == "exit")|| (areaCodeLine=="")) {
                    std::cout << "exiting without entering a phone number" << '\n';
                    areaCodeLine = "";
                    numberLine = "";
                    break;
                }

                try{
                    someNumber = std::stoull(areaCodeLine);
                    if (someNumber > 1000) {
                        throw std::runtime_error("please enter a correct area code!");
                        break;
                    }
                    break;

                } catch (const std::exception& e) {
                    std::cerr << "Please enter an area code!" << '\n';
                    std::cerr << "Type mismatch! : " << e.what() << '\n';
                }


            }
            while (true) {
                if (areaCodeLine == ""){
                    break;
                }
                
                std::cout << "please enter the phone number without the zero part" << '\n';
                std::cout << "To exit, please type 'exit' or press enter without writing anyting" << '\n';

                std::getline(std::cin,numberLine);
                // check for exit request
                if ((numberLine  == "exit")|| (numberLine =="")) {
                    std::cout << "exiting without entering a phone number" << '\n';
                    areaCodeLine = "";
                    numberLine = "";
                    break;
                }

                try{
                    someNumber = std::stoull(numberLine);
                    if (numberLine.find('0') == 0) {        // lets check  if the first digit is zero
                        throw std::runtime_error("please enter phone number without 0!");
                        break;
                    }
                    if (numberLine.size() > 15) {
                        throw std::runtime_error("please enter a valid phone number. The number is too long to be a phone number!");
                        break;                      
                    }
                    break;

                } catch (const std::exception& e) {
                    std::cerr << "Please enter a valid phone number without any text!" << '\n';
                    std::cerr << "Type mismatch! : " << e.what() << '\n';
                }


            }           

             phoneNumber = new std::string(areaCodeLine+numberLine);

        }
        void setEmail ()  {
            delete email;
            std::string val;
            std::cout << "please enter the e-mail of the contact" << std::endl;
            std::getline(std::cin,val);
             email =new std::string(val);
        }
        void setAddress ()  {
            delete address;
            std::string val;
            std::cout << "please enter the address of the contact" << std::endl;
            std::getline(std::cin,val);
            address = new std::string(val);
        }



        void  setID (const size_t val)  {
            id = val;
        }



         // ---------------------------------------------------------------- OTHER FUNCTIONS ----------------------------------------------------------------  // 

        void display() const {
            
            std::cout << "ID              : " << id << std::endl;
            std::cout << "Name is         : " << *name << std::endl;
            std::cout << "Phone number is : " << *phoneNumber << std::endl;
            std::cout << "Email is        : " << *email << std::endl;
            std::cout << "Address is      : " << *address << std::endl;
        }

         // ---------------------------------------------------------------- DESTRUCTOR ----------------------------------------------------------------  // 

        ~Contact() {
            delete name;
            delete phoneNumber;
            delete email;
            delete address;
        }

};
