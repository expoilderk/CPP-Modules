#include "FragTrap.hpp"

/* -- Default constructor -- */

FragTrap::FragTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap Default constructor called" << std::endl;
}

/* -- Destructor -- */

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << " positive high fives." << std::endl;
}
