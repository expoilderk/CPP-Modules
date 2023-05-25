#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Expoilderk");
	ClapTrap b("Josh");

	std::cout << "\n";
	std::cout << "setAttackDamage: " << a.getName() << " and " << b.getName() << std::endl;
	a.setAttackDamage(8);
	b.setAttackDamage(5);

	std::cout << "\n";
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

	std::cout << "\n";
	std::cout << "Name: " << a.getName() << " | Attack Damage: " << a.getAttackDamage();
	std::cout << " | Hits: " << a.getHitPoints() << " | Energy: " << a.getEnergyPoints() << std::endl;

	std::cout << "Name: " << b.getName() << " | Attack Damage: " << b.getAttackDamage();
	std::cout << " | Hits: " << b.getHitPoints() << " | Energy: " << b.getEnergyPoints() << std::endl;

	std::cout << "\n";
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	a.beRepaired(1);
	b.beRepaired(2);

	std::cout << "\n";
	std::cout << "Name: " << a.getName() << " | Attack Damage: " << a.getAttackDamage();
	std::cout << " | Hits: " << a.getHitPoints() << " | Energy: " << a.getEnergyPoints() << std::endl;

	std::cout << "Name: " << b.getName() << " | Attack Damage: " << b.getAttackDamage();
	std::cout << " | Hits: " << b.getHitPoints() << " | Energy: " << b.getEnergyPoints() << std::endl;
	std::cout << "\n";

	a.attack("Josh");

	std::cout << "setEnergyPoints: " << a.getName() << std::endl;
	a.setEnergyPoints(10);
	a.attack("Josh");

	std::cout << "\n";
	b.takeDamage(a.getAttackDamage());

	std::cout << "\n";
	std::cout << "Name: " << a.getName() << " | Attack Damage: " << a.getAttackDamage();
	std::cout << " | Hits: " << a.getHitPoints() << " | Energy: " << a.getEnergyPoints() << std::endl;

	std::cout << "Name: " << b.getName() << " | Attack Damage: " << b.getAttackDamage();
	std::cout << " | Hits: " << b.getHitPoints() << " | Energy: " << b.getEnergyPoints() << std::endl;
	std::cout << "\n";

	b.beRepaired(5);
	std::cout << "\n";

	b.attack("Expoilderk");
	std::cout << "\n";

	return 0;
}
