/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:44:55 by ybong             #+#    #+#             */
/*   Updated: 2021/12/29 20:44:56 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "<DiamondTrap> Default Constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(const std::string name) {
	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = ScavTrap::attackDamage;
	std::cout << "<DiamondTrap> " << this->name << " Constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &src) {
	*this = src;
	std::cout << "<DiamondTrap> " << this->name << " Copy Constructor called" << std::endl;
}
DiamondTrap::~DiamondTrap(void) {
	std::cout << "<DiamondTrap> " << this->name << " Destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other) {
	this->name = other.name + "_copy";
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "<DiamondTrap> " << other.name << " Assignement operator call" << std::endl;
	return *this;
}

void	DiamondTrap::attack(std::string const &target) {
	if (this->hitPoints <= 0) {
		std::cout << "<DiamondTrap> " << this->name << " has no hit points to attack!" << std::endl;
		return;
	}
	this->hitPoints -= 1;
	std::cout << "<DiamondTrap> " << this->name << " attacks " << target \
	<< ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void		DiamondTrap::whoAmI( void ) const
{
	std::cout << "<DiamondTrap> " << this->name << " 💎 ClapTrap name is " << ClapTrap::name << " 💎" << std::endl;
}