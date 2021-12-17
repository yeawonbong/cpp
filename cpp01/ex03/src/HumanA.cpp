/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:24:00 by ybong             #+#    #+#             */
/*   Updated: 2021/12/17 19:24:00 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
