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

int ft_isspace(std::string &input)
{
	size_t i = 0;
	size_t j = 0;

	while (i < input.length())
	{
		if (std::isspace(input.c_str()[i]))
			j++;
		i++;
	}
	if (i == j)
		return 1;
	return 0;
}

int search_check(std::string identifier, PhoneBook& phonebook)
{
	if (!(identifier.c_str()[0] >= '0') && !(identifier.c_str()[0] <= '7'))
		return 1;
	int index = atoi(identifier.c_str());
	if (index >= phonebook.bookSize())
		return 1;
	return 0;
}

void get_input(const std::string& field, std::string &input)
{
	std::cout << field;
	std::getline(std::cin, input);

	while (input.empty() || ft_isspace(input))
	{
		std::cout << "\n\033[31mError: Empty field is not accepted!\033[0m" << std::endl;
		std::cout << field;
		std::getline(std::cin, input);
	}
}

void add(std::string input[6], PhoneBook& phonebook )
{
	printSquareHeader("ADD NEW CONTACT", 45, "\033[32m");

	get_input("First Name: ", input[1]);
	get_input("Last Name: ", input[2]);
	get_input("Nickname: ", input[3]);
	get_input("Phone Number: ", input[4]);
	get_input("Darkest Secret: ", input[5]);

	phonebook.addContact(input);
	std::cout << "\n\033[32mContact saved successfully!\033[0m" << std::endl;
}

void search(std::string input, PhoneBook& phonebook)
{
	std::string identifier;
	int index;

	printSquareHeader("SAVED CONTACTS", 45, "\033[32m");
	if (phonebook.bookSize() == 0) {
		std::cout << "\n\033[31mError: PhoneBook is Empty!\033[0m" << std::endl;
		return;
	}

	phonebook.displayPhoneBook();
	std::cout << "\n\033[32mSearch by Index: \033[0m";
	std::cin >> identifier;

	while (search_check(identifier, phonebook))
	{
		std::cout << identifier << std::endl;
		std::cout << "\n\033[31mError: Invalid Index!\033[0m" << std::endl;
		std::cout << "\n\033[32mInsert a valid Index: \033[0m";
		std::cin >> identifier;
	}
	index = atoi(identifier.c_str());

	printSquareHeader("CONTACT INFORMATION", 45, "\033[32m");
	phonebook.printContact(index);
	std::cin.clear();
	std::getline(std::cin, input);
}

int main()
{
	PhoneBook phonebook;
	std::string input[6];

	printSquareHeader("WELCOME TO PHONEBOOK", 45, "\033[32m");
	while (!std::cin.eof())
	{
		printSquareHeader("CHOOSE OPTION: ADD | SEARCH | EXIT", 45, "\033[32m");
		std::getline(std::cin, input[0]);
		if (input[0] == "ADD")
			add(input, phonebook);
		else if (input[0] == "SEARCH")
			search(input[0], phonebook);
		else if (input[0] == "EXIT") {
			std::cout << "\n\033[32mPhoneBook closed and contacts deleted forever!\033[0m" << std::endl;
			break ;
		} else
			std::cout << "\033[31mINVALID INPUT!\033[0m" << std::endl;
	}
	return 0;
}
