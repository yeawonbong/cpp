/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:22:53 by ybong             #+#    #+#             */
/*   Updated: 2021/12/28 18:31:34 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(void) {}
ClapTrap::ClapTrap(const std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "<ClapTrap> " << this->name << " Constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &src) {
	*this = src;
	std::cout << "<ClapTrap> " << this->name << " Copy Constructor called" << std::endl;
}
ClapTrap::~ClapTrap(void) {
	std::cout << "<ClapTrap> " << this->name << " Destructor called" << std::endl;
}

void	ClapTrap::attack(std::string const &target) {
	if (this->hitPoints <= 0) {
		std::cout << "<ClapTrap>  " << this->name << "has no hit points to attack!" << std::endl;
		return;
	}
	this->hitPoints -= 1; // hit point 역할이 뭐지? 일단 보류.
	std::cout << "<ClapTrap> " << this->name << " attacks " << target \
	<< ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	this->energyPoints -= amount;
	std::cout << "<ClapTrap> " << this->name << " take " << amount << " points of damage! ";
	if (this->energyPoints <= 0) {
		this->energyPoints = 0;
		std::cout << "[no energy point left.... (x_x)]" << std::endl;
	}
	else
		std::cout << "[" << this->energyPoints << " energy points left]" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	this->energyPoints += amount;
	std::cout << "<ClapTrap> " << this->name << " is repaired, " << amount << " energy points added [" \
	<< this->energyPoints << " energy points left]" << std::endl;
}
