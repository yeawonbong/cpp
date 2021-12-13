#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
# include <iostream>


class HumanA
{
private:
	Weapon		&weaponRef;
	std::string	name;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack();
};

#endif