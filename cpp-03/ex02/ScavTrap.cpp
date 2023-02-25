#include "ScavTrap.hpp"

/* -- Default constructor -- */

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap Default constructor called" << std::endl;
}

/* -- Destructor -- */

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (this->_energyPoints <= 0)
		return ;

	this->_energyPoints -= 1;

	std::cout << "ScavTrap " << this->_name;
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}
