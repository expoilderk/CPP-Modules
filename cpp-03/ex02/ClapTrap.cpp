#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Beep"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Named constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " cannot be attack because it has run out of energy!" << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " cannot attack because it is dead!" << std::endl;
	else
	{
		this->_energyPoints -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > (int)amount)
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " take " << this->_hitPoints << " damage and dies!" << std::endl;
		this->_hitPoints = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " cannot be repaired because it has run out of energy!" << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " cannot be repaired because it is already dead!" << std::endl;
	else
	{
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
		std::cout << "ClapTrap " << this->_name << " repaired " << amount << " hit points!" << std::endl;
	}
}

void ClapTrap::setName(std::string const raw)
{
	this->_name = raw;
}

void ClapTrap::setHitPoints(int const raw)
{
	this->_hitPoints = raw;
}

void ClapTrap::setEnergyPoints(int const raw)
{
	this->_energyPoints = raw;
}

void ClapTrap::setAttackDamage(int const raw)
{
	this->_attackDamage = raw;
}

std::string ClapTrap::getName(void) const
{
	return this->_name;
}

int ClapTrap::getHitPoints(void) const
{
	return this->_hitPoints;
}

int ClapTrap::getEnergyPoints(void) const
{
	return this->_energyPoints;
}

int ClapTrap::getAttackDamage(void) const
{
	return this->_attackDamage;
}