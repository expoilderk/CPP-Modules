#include "PhoneBook.hpp"

int PhoneBook::bookSize()
{
    return this->_book_size;
}

void PhoneBook::addContact(std::string input[6])
{
    this->contacts[this->_index].setFirstName(input[1]);
    this->contacts[this->_index].setLastName(input[2]);
    this->contacts[this->_index].setNickname(input[3]);
    this->contacts[this->_index].setPhoneNumber(input[4]);
    this->contacts[this->_index].setDarkestSecret(input[5]);
    this->_index = (this->_index +1) % 8;

    if (this->_book_size < 8)
        this->_book_size++;
}

std::string PhoneBook::truncate(const std::string& str, size_t width)
{
    if (str.length() > width) {
        return str.substr(0, width - 1) + ".";
    }
    return str;
}

void PhoneBook::displayPhoneBook()
{
    std::cout << "|" << std::setw(10) << std::right << std::setfill(' ') << "Index" << "|"
    << std::setw(10) << std::right << std::setfill(' ') << "First Name" << "|"
    << std::setw(10) << std::right << std::setfill(' ') << "Last Name" << "|"
    << std::setw(10) << std::right << std::setfill(' ') << "Nickname" << "|" << std::endl;

    for (int i = 0; i < this->_book_size; i++)
    {
        std::cout << "|" << std::setw(10) << std::right << std::setfill(' ') << i << "|"
        << std::setw(10) << std::right << std::setfill(' ') << truncate(this->contacts[i].getFirstName(), 10) << "|"
        << std::setw(10) << std::right << std::setfill(' ') << truncate(this->contacts[i].getLastName(), 10) << "|"
        << std::setw(10) << std::right << std::setfill(' ') << truncate(this->contacts[i].getNickname(), 10) << "|"
        << std::endl;
    }
}

void PhoneBook::printContact(int index)
{
    std::cout << "First Name: " << this->contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << this->contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << this->contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number: " << this->contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << this->contacts[index].getDarkestSecret() << std::endl;
    std::cout << "\n";
}
