#include "../includes/WrongAnimal.hpp"

/* -- Default empty constructor -- */

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "WrongAnimal Default empty constructor called" << std::endl;
}

/* -- Default constructor -- */

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

/* -- Copy constructor by using copy assignment operator overload -- */

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = other;
}

/* -- Copy assignment operator overload -- */

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::setType(std::string const raw)
{
    this->_type = raw;
}

std::string WrongAnimal::getType(void) const
{
    return this->_type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal: makeSound" << std::endl;
}