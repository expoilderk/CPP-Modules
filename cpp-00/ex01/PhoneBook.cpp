#include "PhoneBook.hpp"

int PhoneBook::bookSize() {
    return this->book_size;
}

void PhoneBook::addContact(std::string input[6]) {

    this->contacts[this->index].setFirstName(input[1]);
    this->contacts[this->index].setLastName(input[2]);
    this->contacts[this->index].setNickname(input[3]);
    this->contacts[this->index].setPhoneNumber(input[4]);
    this->contacts[this->index].setDarkestSecret(input[5]);
    this->index = (this->index +1) % 8;

    if (this->book_size < 8)
        this->book_size++;
}

std::string truncate(const std::string& str, size_t width) {
    if (str.length() > width) {
        return str.substr(0, width - 1) + ".";
    }
    return str;
}

void PhoneBook::displayPhoneBook() {
    std::cout << "|" << std::setw(10) << std::right << "Index" << "|"
    << std::setw(10) << std::right << "First Name" << "|"
    << std::setw(10) << std::right << "Last Name" << "|"
    << std::setw(10) << std::right << "Nickname" << "|" << std::endl;

    for (int i = 0; i < this->book_size; i++)
    {
        std::cout << "|" << std::setw(10) << std::right << i << "|"
        << std::setw(10) << std::right << truncate(this->contacts[i].getFirstName(), 10) << "|"
        << std::setw(10) << std::right << truncate(this->contacts[i].getLastName(), 10) << "|"
        << std::setw(10) << std::right << truncate(this->contacts[i].getNickname(), 10) << "|"
        << std::endl;
    }   
}

void PhoneBook::printContact(int index) {   
    std::cout << "First Name: " << this->contacts[index].getFirstName() << std::endl; 
    std::cout << "Last Name: " << this->contacts[index].getLastName() << std::endl; 
    std::cout << "Nickname: " << this->contacts[index].getNickname() << std::endl; 
    std::cout << "Phone Number: " << this->contacts[index].getPhoneNumber() << std::endl; 
    std::cout << "Darkest Secret: " << this->contacts[index].getDarkestSecret() << std::endl; 
}
