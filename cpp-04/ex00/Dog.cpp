#include "Dog.hpp"

/* -- Default constructor -- */

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default constructor called" << std::endl;
}

/* -- Copy constructor by using copy assignment operator overload -- */

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog Copy constructor called" << std::endl;
}

/* -- Copy assignment operator overload -- */

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    Animal::operator=(other);
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof! Woof!" << std::endl;
}