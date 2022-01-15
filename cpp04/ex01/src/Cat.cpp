/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:25:06 by ybong             #+#    #+#             */
/*   Updated: 2022/01/15 21:34:02 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(void) {
	std::cout << std::setw(13) << "<Cat>" << " Default Constructor called" << std::endl;
	this->type = "CAT";
	this->brain = new Brain;
	std::cout << std::left;
}
Cat::Cat(const Cat &src) {
	this->type = src.type;
	this->brain = src.brain;
	std::cout << std::left;
	std::cout << std::setw(13) << "<Cat>" << " Copy Constructor called" << std::endl;
}
Cat::~Cat(void) {
	delete this->brain;
	std::cout << std::left;
	std::cout << std::setw(13) << "<Cat>" << " Destructor called" << std::endl;
}
Cat	&Cat::operator=(const Cat &src) {
	std::cout << "<Cat> assignment operator called" << std::endl;
	this->type = src.getType();
	*(this->brain) = *(src.getBrain());
	return *this;
}
Animal &Cat::operator=(const Animal &src) {
	std::cout << "<Cat> Animal assignment operator called" << std::endl;
	this->type = src.getType();
	*(this->brain) = *(src.getBrain());
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << std::left;
	std::cout << std::setw(13) << "<Cat>" << " 🐱 Meowww.." << std::endl;
}

Brain	*Cat::getBrain(void) const {
	return this->brain;
}