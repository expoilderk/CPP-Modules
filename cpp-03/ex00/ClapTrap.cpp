#include "ClapTrap.hpp"

/* -- Default constructor -- */

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default constructor called" << std::endl;
}

/* -- Copy constructor by using copy assignment operator overload -- */

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

/* -- Copy assignment operator overload -- */

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

/* -- Destructor -- */

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (this->_energyPoints <= 0)
		return ;

	this->_energyPoints -= 1;

	std::cout << "ClapTrap " << this->_name;
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints > (int)amount)
		this->_hitPoints -= amount;
	else
		this->_hitPoints = 0;

	std::cout << "ClapTrap " << this->_name;
	std::cout << " take " << amount;
	std::cout << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints <= 0)
		return ;
	
	this->_hitPoints += amount;
	this->_energyPoints -= 1;
	
	std::cout << "ClapTrap " << this->_name;
	std::cout << " repaired " << amount;
	std::cout << " hit points!" << std::endl;
}

/* -- Setters -- */
void ClapTrap::setName(std::string const raw) {
	this->_name = raw;
}

void ClapTrap::setHitPoints(int const raw) {
	this->_hitPoints = raw;
}

void ClapTrap::setEnergyPoints(int const raw) {
	this->_energyPoints = raw;
}

void ClapTrap::setAttackDamage(int const raw) {
	this->_attackDamage = raw;
}

/* -- Getters -- */
std::string ClapTrap::getName(void) const {
	return this->_name;
}

int ClapTrap::getHitPoints(void) const {
	return this->_hitPoints;
}

int ClapTrap::getEnergyPoints(void) const {
	return this->_energyPoints;
}

int ClapTrap::getAttackDamage(void) const {
	return this->_attackDamage;
}
