/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 00:50:21 by ybong             #+#    #+#             */
/*   Updated: 2022/01/02 00:50:22 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"
#include "../include/Character.hpp"
#define BLUE "\033[1;34m"
#define RESET "\033[1;0m"

Ice::Ice(void) : AMateria("ice") {
	std::cout << std::left << std::setw(17) << "<Ice>" << "Default constructor called" << std::endl;
}
Ice::Ice(Ice const &src) : AMateria("ice") {
	std::cout << std::left << std::setw(17) << "<Ice>" << "Copy constructor called" << std::endl;
	*this = src;
}
Ice::~Ice(void) {
	std::cout << std::left << std::setw(17) << "<Ice>" << "Destructor called" << std::endl;
}

AMateria	*Ice::clone(void) const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter	&target) {
	std::cout << BLUE << std::left << std::setw(17) << "<Ice>" << "* shoots an ice bolt at " << target.getName() << " *" << std::endl << RESET;
}