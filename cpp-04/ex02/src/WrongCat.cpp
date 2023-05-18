#include "../includes/WrongCat.hpp"

/* -- Default constructor -- */

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Default constructor called" << std::endl;
}

/* -- Copy constructor by using copy assignment operator overload -- */

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
}

/* -- Copy assignment operator overload -- */

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    WrongAnimal::operator=(other);
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat: Meow! Meow!" << std::endl;
}