#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
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
