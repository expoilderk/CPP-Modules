#include "PhoneBook.hpp"

int PhoneBook::bookSize() {
    return this->book_size;
}

void PhoneBook::addContact(std::string input[6]) {

    int index;

    index = this->index;

    std::cout << "index: " << this->index << std::endl;

    this->contacts[index].setFirstName(input[1]);
    this->contacts[index].setLastName(input[2]);
    this->contacts[index].setNickname(input[3]);
    this->contacts[index].setPhoneNumber(input[4]);
    this->contacts[index].setDarkestSecret(input[5]);
    this->index = (index +1) % 8;

    std::cout << "booksize: " << this->book_size << std::endl;

    if (this->book_size < 8)
        this->book_size++;    
}

void PhoneBook::displayPhoneBook() {
    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;

    for (int i = 0; i < this->book_size; i++)
    {
        std::cout << "|";
        std::cout << i;
        std::cout << "|";
        std::cout << this->contacts[i].getFirstName();
        std::cout << "|";
        std::cout << this->contacts[i].getLastName(); 
        std::cout << "|";
        std::cout << this->contacts[i].getNickname(); 
        std::cout << "|";
    }
    std::cout << std::endl;
}

void PhoneBook::printContact(int index) {   
    std::cout << "First Name: " << this->contacts[index].getFirstName() << std::endl; 
    std::cout << "Last Name: " << this->contacts[index].getLastName() << std::endl; 
    std::cout << "Nickname: " << this->contacts[index].getNickname() << std::endl; 
    std::cout << "Phone Number: " << this->contacts[index].getPhoneNumber() << std::endl; 
    std::cout << "Darkest Secret: " << this->contacts[index].getDarkestSecret() << std::endl; 
}