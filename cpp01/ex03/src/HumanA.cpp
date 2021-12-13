#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) 
	: weaponRef(weapon), name(name)
{
}
HumanA::~HumanA(void){}

void	HumanA::attack()
{
	std::cout << name << " attacks with his " << weaponRef.getType() << std::endl;
}
