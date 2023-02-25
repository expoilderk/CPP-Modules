#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Expoilderk");
	ScavTrap b("Josh");

	std::cout << "\nStatus: \n";
	std::cout << "Name: " << a.getName() << " | Attack Damage: " << a.getAttackDamage(); 
	std::cout << " | Hits: " << a.getHitPoints() << " | Energy: " << a.getEnergyPoints() << std::endl;
	
	std::cout << "Name: " << b.getName() << " | Attack Damage: " << b.getAttackDamage(); 
	std::cout << " | Hits: " << b.getHitPoints() << " | Energy: " << b.getEnergyPoints() << std::endl;

	std::cout << "\n";
	a.attack("Josh");
	b.attack("Expoilderk");

	std::cout << "\n";
	b.takeDamage(a.getAttackDamage());
	a.takeDamage(b.getAttackDamage());

	std::cout << "\nStatus: \n";
	std::cout << "Name: " << a.getName() << " | Attack Damage: " << a.getAttackDamage(); 
	std::cout << " | Hits: " << a.getHitPoints() << " | Energy: " << a.getEnergyPoints() << std::endl;
	
	std::cout << "Name: " << b.getName() << " | Attack Damage: " << b.getAttackDamage(); 
	std::cout << " | Hits: " << b.getHitPoints() << " | Energy: " << b.getEnergyPoints() << std::endl;

	std::cout << "\n";
	a.beRepaired(2);
	b.beRepaired(2);
	
	std::cout << "\n";
	a.guardGate();
	b.guardGate();

	std::cout << "\nStatus: \n";
	std::cout << "Name: " << a.getName() << " | Attack Damage: " << a.getAttackDamage(); 
	std::cout << " | Hits: " << a.getHitPoints() << " | Energy: " << a.getEnergyPoints() << std::endl;
	
	std::cout << "Name: " << b.getName() << " | Attack Damage: " << b.getAttackDamage(); 
	std::cout << " | Hits: " << b.getHitPoints() << " | Energy: " << b.getEnergyPoints() << std::endl;
	std::cout << "\n";

	return 0;
}
