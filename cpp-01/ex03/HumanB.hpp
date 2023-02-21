#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
    private:
        std::string _name;
        Weapon* weapon;
    public:
        HumanB(std::string name);
        void attack() const;
        void setWeapon(Weapon& weapon);
};

#endif // HUMANB_HPP
