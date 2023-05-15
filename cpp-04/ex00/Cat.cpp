#include "Cat.hpp"

/* -- Default constructor -- */

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
}

/* -- Copy constructor by using copy assignment operator overload -- */

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat Copy constructor called" << std::endl;
}

/* -- Copy assignment operator overload -- */

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    Animal::operator=(other);
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow! Meow!" << std::endl;
}