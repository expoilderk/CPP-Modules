#include "PhoneBook.hpp"

void printSquareHeader(const std::string& text, int width, const std::string& textColor = "")
{
    int textWidth = text.length();
    int padding = (width - textWidth - 2) / 2;
    int leftPadding = padding;
    int rightPadding = width - textWidth - 2 - leftPadding;
    std::string border(width, '-');
    std::string leftPaddingStr(leftPadding, ' ');
    std::string rightPaddingStr(rightPadding, ' ');
    std::string header = "|" + leftPaddingStr + textColor + text + "\033[0m" + rightPaddingStr + "|";
    std::cout << std::setw(width) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ') << std::left << header << std::endl;
    std::cout << std::setw(width) << std::setfill('-') << "" << std::endl;
}

void add(std::string input[6], PhoneBook& phonebook )
{
	printSquareHeader("ADD NEW CONTACT", 45, "\033[32m");
	std::cout << "First Name: ";
	std::getline(std::cin, input[1]);
	std::cout << "Last Name: ";
	std::getline(std::cin, input[2]);
	std::cout << "Nickname: ";
	std::getline(std::cin, input[3]);
	std::cout << "Phone Number: ";
	std::getline(std::cin, input[4]);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, input[5]);

	phonebook.addContact(input);
	std::cout << "\n\033[32mContact saved successfully!\033[0m" << std::endl;
}

void search(std::string input, int index, PhoneBook& phonebook)
{
	printSquareHeader("SAVED CONTACTS", 45, "\033[32m");
	if (phonebook.bookSize() == 0) {
		std::cout << "\n\033[31mError: PhoneBook is Empty!\033[0m" << std::endl;
		return;
	}

	phonebook.displayPhoneBook();
	std::cout << "\n\033[32mSearch by Index: \033[0m";
	std::cin >> index;
	while (std::cin.fail() || index < 0 || index >= phonebook.bookSize())
	{
		std::cout << "\n\033[31mError: Invalid Index!\033[0m" << std::endl;
		std::cout << "\n\033[32mInsert a valid Index: \033[0m";
		std::cin >> index;
	}

	printSquareHeader("CONTACT INFORMATION", 45, "\033[32m");
	phonebook.printContact(index);
	std::cin.clear();
	std::getline(std::cin, input);
}

int main()
{
	PhoneBook phonebook;
	std::string input[6];
	int index = 0;

	printSquareHeader("WELCOME TO PHONEBOOK", 45, "\033[32m");
	while (42)
	{
		printSquareHeader("CHOOSE OPTION: ADD | SEARCH | EXIT", 45, "\033[32m");
		std::getline(std::cin, input[0]);
		if (input[0] == "ADD")
			add(input, phonebook);
		else if (input[0] == "SEARCH")
			search(input[0], index, phonebook);
		else if (input[0] == "EXIT") {
			std::cout << "\n\033[32mPhoneBook closed and contacts deleted forever!\033[0m" << std::endl;
			break ;
		} else
			std::cout << "\033[31mINVALID INPUT!\033[0m" << std::endl;
	}
	return 0;
}
