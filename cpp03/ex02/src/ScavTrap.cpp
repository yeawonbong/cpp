/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:40:28 by ybong             #+#    #+#             */
/*   Updated: 2021/12/29 20:44:45 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
ScavTrap::ScavTrap(void) {
	std::cout << "<ScavTrap> Default Constructor called" << std::endl;
}
ScavTrap::ScavTrap(const std::string name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "<ScavTrap> " << this->name << " Constructor called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &src) {
	*this = src;
	std::cout << "<ScavTrap> " << this->name << " Copy Constructor called" << std::endl;
}
ScavTrap::~ScavTrap(void) {
	std::cout << "<ScavTrap> " << this->name << " Destructor called" << std::endl;
}
ScavTrap	&ScavTrap::operator=(const ScavTrap &other) {
	this->name = other.name + "_copy";
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "<ScavTrap> " << other.name << " Assignement operator call" << std::endl;
	return *this;
}

void	ScavTrap::attack(std::string const &target) {
	if (this->hitPoints <= 0) {
		std::cout << "<ScavTrap>  " << this->name << "has no hit points to attack!" << std::endl;
		return;
	}
	this->hitPoints -= 1;
	std::cout << "<ScavTrap> " << this->name << " attacks " << target \
	<< ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "<ScavTrap>" << this->name << "🚪 have enterred in Gate keeper mode 🚪" << std::endl;
}
