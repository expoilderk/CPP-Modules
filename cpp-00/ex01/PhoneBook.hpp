#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int index;
		int book_size;
	public:
		PhoneBook() : index(0), book_size(0) {};
		int bookSize();
		void addContact(std::string input[6]);
		void displayPhoneBook();
		void printContact(int index);
};
