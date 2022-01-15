/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 21:13:57 by ybong             #+#    #+#             */
/*   Updated: 2022/01/16 01:51:19 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"
#include "../include/Character.hpp"
#define BLUE "\033[1;34m"
#define RESET "\033[1;0m"

Cure::Cure(void) : AMateria("cure") {
	std::cout << std::setw(17) << std::left << "<Cure>" << "Default constructor called" << std::endl;
}
Cure::Cure(Cure const &src) : AMateria("Cure") {
	std::cout << std::setw(17) << std::left << "<Cure>" << "Copy constructor called" << std::endl;
	*this = src;
}
Cure::~Cure(void) {
	std::cout << std::setw(17) << std::left << "<Cure>" << "Destructor called" << std::endl;
}

Cure		&Cure::operator=(const Cure &other) {
	std::cout << std::left << std::setw(17) << "<Cure>" << "Assignment operator called" << std::endl;
	this->type = other.getType();
	return *this;
}

AMateria	*Cure::clone(void) const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter	&target) {
	std::cout << BLUE << std::setw(17) << std::left << "<Cure>" << "* heals " << target.getName() << "'s wounds *" << std::endl << RESET;
}