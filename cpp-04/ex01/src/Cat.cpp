#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
	try
	{
		this->_brain = new Brain();
	}
	catch (const std::bad_alloc &e)
	{
		std::cout << "Failed: Memory Allocation" << e.what() << std::endl;
	}
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_brain;
}

Brain *Cat::getBrain(void) const
{
	return this->_brain;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow! Meow!" << std::endl;
}