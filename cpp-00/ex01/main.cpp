#include "PhoneBook.hpp"

void add(std::string input[6], PhoneBook& phonebook ) {

	std::cout << "Enter contact information" << std::endl;
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
	std::cout << "Contact added successfully!" << std::endl;
}

void search(std::string input, int index, PhoneBook& phonebook) {
	/*
	- Display the saved contacts as a list of 4 columns: index, first name, last name and nickname.
	◦ Each column must be 10 characters wide. A pipe character (’|’) separates them. 
	The text must be right-aligned. If the text is longer than the column,
	it must be truncated and the last displayable character must be replaced by a dot (’.’).
	◦ Then, prompt the user again for the index of the entry to display. If the index
	is out of range or wrong, define a relevant behavior. Otherwise, display the contact information, one field per line.

	- Mostrar os contactos guardados como uma lista de 4 colunas: índice, nome próprio, apelido e apelido.
	◦ Cada coluna deve ter 10 caracteres de largura. Um carácter de tubo ('|')
	separa-os. O texto tem de ser alinhado à direita. Se o texto for mais longo
	do que a coluna, deve ser truncado e o último caractere visível deve ser substituído por um ponto ('.').
	◦ Em seguida, solicitar novamente ao utilizador o índice da entrada a exibir.
	Se o índice estiver fora do intervalo ou errado, definir um comportamento
	relevante. Caso contrário, exibir a informação de contacto, um campo por linha.
	*/

	phonebook.displayPhoneBook();
	std::cout << "Enter the search index: ";
	std::cin >> index;
	phonebook.printContact(index);
	std::cin.clear();
	std::getline(std::cin, input);
}

void exit() {
	
}

int main()
{
	PhoneBook phonebook; //Instancia da classe PhoneBook
	std::string input[6];
	int index = 0;

	std::cout << "WELCOME TO PHONEBOOK!" << std::endl;

	while (42)
	{	
		std::cout << "\nCHOOSE OPTION: ADD | SEARCH | EXIT " << std::endl;
		std::getline(std::cin, input[0]);
		
		if (input[0] == "ADD")
			add(input, phonebook);
		else if (input[0] == "SEARCH")
			search(input[0], index, phonebook);
		else if (input[0] == "EXIT") {
			std::cout << "Program finished!" << std::endl;
			break ;
		} else
			std::cout << "INVALID INPUT" << std::endl;
	}
	return 0;
}
