#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
}

HumanB::~HumanB(void){}

void	HumanB::setWeapon(Weapon weapon)
{
	this->weaponPointer = &weapon;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with his " << weaponPointer->getType() << std::endl;
}
