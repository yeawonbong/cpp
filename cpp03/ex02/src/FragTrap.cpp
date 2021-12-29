/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:44:42 by ybong             #+#    #+#             */
/*   Updated: 2021/12/29 20:44:43 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "<FragTrap> Default Constructor called" << std::endl;
}
FragTrap::FragTrap(const std::string name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "<FragTrap> " << this->name << " Constructor called" << std::endl;
}
FragTrap::FragTrap(const FragTrap &src) {
	*this = src;
	std::cout << "<FragTrap> " << this->name << " Copy Constructor called" << std::endl;
}
FragTrap::~FragTrap(void) {
	std::cout << "<FragTrap> " << this->name << " Destructor called" << std::endl;
}
FragTrap	&FragTrap::operator=(const FragTrap &other) {
	this->name = other.name + "_copy";
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	std::cout << "<FragTrap> " << other.name << " Assignement operator call" << std::endl;
	return *this;
}
void FragTrap::highFivesGuys(void) {
	std::cout << "<FragTrap> " << this->name << " 🙌 Give me a High Five!! 🙌" << std::endl;
}