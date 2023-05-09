#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name), weapon(NULL) {}

void HumanB::attack() const
{
    if (!weapon)
        std::cout << "Weapon not defined!" << std::endl;
    else
        std::cout << _name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
