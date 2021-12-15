#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name) : weaponPointer(0), name(name)
{
}

HumanB::~HumanB(void){}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weaponPointer = &weapon;
}

void	HumanB::attack()
{
	if (weaponPointer)
		std::cout << name << " attacks with his " << weaponPointer->getType() << std::endl;
	else
		std::cout << name << " doesn't have any weapon. Failed to attack." << std::endl;
}
