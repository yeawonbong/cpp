/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:31:33 by ybong             #+#    #+#             */
/*   Updated: 2021/12/30 00:20:35 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal(void) : type("") {
	std::cout << "<Animal> Default Constructor called" << std::endl;
}
Animal::Animal(const Animal &src) {
	*this = src;
	std::cout << "<Animal> Copy Constructor called" << std::endl;
}
Animal::~Animal(void) {
	std::cout << "<Animal> Destructor called" << std::endl;
}
Animal& Animal::operator=(const Animal &src) {
	this->type = src.type;
	return *this;
}

const std::string	&Animal::getType(void) const {
	return this->type;
}

std::ostream	&operator<<(std::ostream &ostream, const Animal &instance) {
	ostream << instance.getType();
	return ostream;
}