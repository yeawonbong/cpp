/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:31:33 by ybong             #+#    #+#             */
/*   Updated: 2021/12/31 18:24:59 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("") {
	std::cout << std::left;
	std::cout << std::setw(13) << "<WrongAnimal>" << " Default Constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	*this = src;
	std::cout << std::left;
	std::cout << std::setw(13) << "<WrongAnimal>" << " Copy Constructor called" << std::endl;
}
WrongAnimal::~WrongAnimal(void) {
	std::cout << std::left;
	std::cout << std::setw(13) << "<WrongAnimal>" << " Destructor called" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &src) {
	this->type = src.type;
	return *this;
}

void WrongAnimal::makeSound(void) const {
	std::cout << std::left;
	std::cout << std::setw(13) << "<Wrong Animal>" << " ?? WrongAnimal's sound..... \"???\"" << std::endl;
}

const std::string	&WrongAnimal::getType(void) const {
	return this->type;
}

std::ostream	&operator<<(std::ostream &ostream, const WrongAnimal &instance) {
	ostream << instance.getType();
	return ostream;
}