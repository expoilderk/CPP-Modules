#include <iostream>
#include <string>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR;
	std::string stringREF;

	stringPTR = &string;
	stringREF = string;

	std::cout << "Adress of str: " << &string << std::endl;
	std::cout << "Adress held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Adress held by stringREF: " << &stringREF << std::endl;

	std::cout << "Value of str: " << string << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;

	return 0;
}
