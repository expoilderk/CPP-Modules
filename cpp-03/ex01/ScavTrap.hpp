#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
		ScavTrap();
	public:
		ScavTrap(std::string name);
		~ScavTrap();

		void guardGate();
		void attack(const std::string &target);
};

#endif // SCAVTRAP_HPP
