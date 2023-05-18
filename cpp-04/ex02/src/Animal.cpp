#include "../includes/Animal.hpp"

/* -- Default empty constructor -- */

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal Default empty constructor called" << std::endl;
}

/* -- Default constructor -- */

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal Default constructor called" << std::endl;
}

/* -- Copy constructor by using copy assignment operator overload -- */

Animal::Animal(const Animal &other)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = other;
}

/* -- Copy assignment operator overload -- */

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

void Animal::setType(std::string const raw)
{
    this->_type = raw;
}

std::string Animal::getType(void) const
{
    return this->_type;
}

void Animal::makeSound(void) const
{
    std::cout << "Animal makeSound" << std::endl;
}