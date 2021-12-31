/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:25:04 by ybong             #+#    #+#             */
/*   Updated: 2021/12/31 18:25:04 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(void) {
	this->type = "DOG";
	std::cout << std::left;
	std::cout << std::setw(13) << "<Dog>" << " Default Constructor called" << std::endl;
}
Dog::Dog(const Dog &src) {
	this->type = src.type;
	std::cout << std::left;
	std::cout << std::setw(13) << "<Dog>" << " Copy Constructor called" << std::endl;
}
Dog::~Dog(void) {
	std::cout << std::left;
	std::cout << std::setw(13) << "<Dog>" << " Destructor called" << std::endl;
}
Dog& Dog::operator=(const Dog &src) {
	this->type = src.type;
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << std::left;
	std::cout << std::setw(13) << "<Dog>" << " 🐶 Woof!" << std::endl;
}