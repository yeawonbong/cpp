/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 00:50:17 by ybong             #+#    #+#             */
/*   Updated: 2022/01/16 01:47:52 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(void) : name(""), equipNum(0) {
	std::cout << std::setw(17) << std::left << "<Character>" << "Default constructor called" << std::endl;
	for(int i=0; i<4; i++) {
		this->inventory[i] = 0;
	}
}
Character::Character(const std::string &name) : name(name), equipNum(0) {
	std::cout << std::setw(17) << std::left << "<Character>" << "Name constructor called" << std::endl;
	for(int i=0; i<4; i++) {
		this->inventory[i] = 0;
	}
}
Character::Character(const Character & src) {
	std::cout << std::setw(17) << std::left << "<Character>" << "Copy constructor called" << std::endl;
	*this = src;
}

Character::~Character(void) {
	std::cout << std::setw(17) << std::left << "<Character>" << "Destructor called" << std::endl;
}

Character&	Character::operator=(const Character &other) {
	std::cout << std::setw(17) << std::left << "<Character>" << "Assignment operator called" << std::endl;
	this->name = other.getName();
	this->equipNum = other.getEquipNum();
	for (int i=0; i < this->equipNum; i++) {
		this->inventory[i] = other.inventory[i];
	}
	return *this;
}

void	Character::equip(AMateria *m) {
	if (!m) {
		std::cout << std::setw(17) << std::left << "<Character>" << "Equip Failed: Invalid input" << std::endl;
		return;
	}
	if (this->equipNum < 4) {
		this->inventory[equipNum++] = m;
		std::cout << std::setw(17) << std::left << "<Character>" << "Equipped " << m->getType() << std::endl;
	}
	else
		std::cout << std::setw(17) << std::left << "<Character>" << "Equip Failed: Inventory is full" << std::endl;
}

void	Character::unequip(int idx) {
	std::cout << std::setw(17) << std::left << "<Character>" << "Unquipped " << this->inventory[idx]->getType() << std::endl;
	for (; idx < 3; idx++) {
		this->inventory[idx] = this->inventory[idx+1];
	}
	this->inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter& target) {
	if (!this->inventory[idx]) {
		std::cout << std::setw(17) << std::left << "<Character>" << "Use Failed: The Materia doen't exist" << std::endl;
		return;
	}
	this->inventory[idx]->use(target);
}



std::string const	&Character::getName() const {
	return this->name;
}
int					Character::getEquipNum(void) const {
	return this->equipNum;
}
AMateria			**Character::getInventory(void) {
	return this->inventory;
}