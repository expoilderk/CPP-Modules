#include "../includes/Dog.hpp"

/* -- Default constructor -- */

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default constructor called" << std::endl;
    try
    {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc &e)
    {
        std::cout << "Failed: Memory Allocation" << e.what() << std::endl;
    }
}

/* -- Default destructor -- */

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
    delete this->_brain;
}

/* -- Copy constructor by using copy assignment operator overload -- */

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    this->_brain = new Brain(*other._brain);
}

/* -- Copy assignment operator overload -- */

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
        this->_brain = new Brain(*other._brain);
    }
    return *this;
}

Brain *Dog::getBrain(void) const
{
    return this->_brain;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof! Woof!" << std::endl;
}