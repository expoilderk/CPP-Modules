#include "../includes/Brain.hpp"

/* -- Default constructor -- */

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
}

/* -- Default destructor -- */

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}

/* -- Copy constructor by using copy assignment operator overload -- */

Brain::Brain(const Brain &other)
{
    // std::cout << "Brain Copy constructor called" << std::endl;
    *this = other;
}

/* -- Copy assignment operator overload -- */

Brain &Brain::operator=(const Brain &other)
{
    // std::cout << "Brain Copy assignment operator called" << std::endl;
    std::cout << "Brain Copy constructor called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = other._ideas[i];
    }
    return *this;
}

void Brain::setIdea(std::string const raw)
{
    for (unsigned long i = 0; i < sizeof(this->_ideas) / sizeof(std::string); i++)
    {
        if (this->_ideas->empty())
        {
            this->_ideas[i] = raw;
            return;
        }
    }
}

std::string Brain::getIdea(int pos) const
{
    return this->_ideas[pos];
}
