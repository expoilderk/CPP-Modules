#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class PhoneBook {
	private:
		Contact contacts[8];
		int _index;
		int _book_size;
		std::string truncate(const std::string& str, size_t width);
	public:
		PhoneBook() : _index(0), _book_size(0) {};
		int bookSize();
		void addContact(std::string input[6]);
		void displayPhoneBook();
		void printContact(int index);
};

#endif // PHONEBOOK_HPP
