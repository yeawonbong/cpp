/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:25:04 by ybong             #+#    #+#             */
/*   Updated: 2022/01/15 21:34:09 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(void) {
	std::cout << std::setw(13) << "<Dog>" << " Default Constructor called" << std::endl;
	this->type = "DOG";
	this->brain = new Brain;
	std::cout << std::left;
}
Dog::Dog(const Dog &src) {
	this->type = src.type;
	this->brain = src.brain;
	std::cout << std::left;
	std::cout << std::setw(13) << "<Dog>" << " Copy Constructor called" << std::endl;
}
Dog::~Dog(void) {
	delete this->brain;
	std::cout << std::left;
	std::cout << std::setw(13) << "<Dog>" << " Destructor called" << std::endl;
}
Dog& Dog::operator=(const Dog &src) {
	std::cout << "<Dog> assignment operator called" << std::endl;
	this->type = src.getType();
	this->brain = src.getBrain();
	return *this;
}
Animal &Dog::operator=(const Animal &src) {
	std::cout << "<Dog> Animal assignment operator called" << std::endl;
	this->type = src.getType();
	this->brain = src.getBrain();
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << std::left;
	std::cout << std::setw(13) << "<Dog>" << " 🐶 Woof!" << std::endl;
}

Brain	*Dog::getBrain(void) const {
	return this->brain;
}