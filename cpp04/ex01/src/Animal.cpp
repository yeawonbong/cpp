/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:31:33 by ybong             #+#    #+#             */
/*   Updated: 2021/12/31 22:33:44 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal(void) : type("") {
	std::cout << std::left;
	std::cout << std::setw(13) << "<Animal>" << " Default Constructor called" << std::endl;
}
Animal::Animal(const Animal &src) {
	*this = src;
	std::cout << std::left;
	std::cout << std::setw(13) << "<Animal>" << " Copy Constructor called" << std::endl;
}
Animal::~Animal(void) {
	std::cout << std::left;
	std::cout << std::setw(13) << "<Animal>" << " Destructor called" << std::endl;
}
Animal& Animal::operator=(const Animal &src) {
	std::cout << "<Animal> assignment operator called" << std::endl;
	this->type = src.type;
	return *this;
}

void Animal::makeSound(void) const {
	std::cout << std::left;
	std::cout << std::setw(13) << "<Animal>" << " ?? Animal's sound..... \"???\"" << std::endl;
}

const std::string	&Animal::getType(void) const {
	return this->type;
}

std::ostream	&operator<<(std::ostream &ostream, const Animal &instance) {
	ostream << instance.getType();
	return ostream;
}