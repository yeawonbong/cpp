/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:24:02 by ybong             #+#    #+#             */
/*   Updated: 2021/12/20 15:52:03 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
