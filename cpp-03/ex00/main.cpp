#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Expoilderk");
	ClapTrap b("Josh");

	a.setAttackDamage(5);

	std::cout << "Clap Name: " << a.getName() << " | Attack Damage: " << a.getAttackDamage(); 
	std::cout << " | Hits: " << a.getHitPoints() << " | Energy: " << a.getEnergyPoints() << std::endl;
	
	std::cout << "Clap Name: " << b.getName() << " | Attack Damage: " << b.getAttackDamage(); 
	std::cout << " | Hits: " << b.getHitPoints() << " | Energy: " << b.getEnergyPoints() << std::endl;

	std::cout << "\n";
	a.attack("Josh");
	b.attack("Expoilderk");

	std::cout << "\n";
	b.takeDamage(a.getAttackDamage());
	a.takeDamage(b.getAttackDamage());

	std::cout << "\n";
	std::cout << "Clap Name: " << a.getName() << " | Attack Damage: " << a.getAttackDamage(); 
	std::cout << " | Hits: " << a.getHitPoints() << " | Energy: " << a.getEnergyPoints() << std::endl;
	
	std::cout << "Clap Name: " << b.getName() << " | Attack Damage: " << b.getAttackDamage(); 
	std::cout << " | Hits: " << b.getHitPoints() << " | Energy: " << b.getEnergyPoints() << std::endl;

	std::cout << "\n";
	a.beRepaired(2);
	b.beRepaired(2);
	
	std::cout << "\n";
	std::cout << "Clap Name: " << a.getName() << " | Attack Damage: " << a.getAttackDamage(); 
	std::cout << " | Hits: " << a.getHitPoints() << " | Energy: " << a.getEnergyPoints() << std::endl;
	
	std::cout << "Clap Name: " << b.getName() << " | Attack Damage: " << b.getAttackDamage(); 
	std::cout << " | Hits: " << b.getHitPoints() << " | Energy: " << b.getEnergyPoints() << std::endl;

	return 0;
}
