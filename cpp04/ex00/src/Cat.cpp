/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:25:06 by ybong             #+#    #+#             */
/*   Updated: 2022/01/03 16:40:02 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(void) {
	this->type = "CAT";
	std::cout << std::left;
	std::cout << std::setw(13) << "<Cat>" << " Default Constructor called" << std::endl;
}
Cat::Cat(const Cat &src) {
	this->type = src.type;
	std::cout << std::left;
	std::cout << std::setw(13) << "<Cat>" << " Copy Constructor called" << std::endl;
}
Cat::~Cat(void) {
	std::cout << std::left;
	std::cout << std::setw(13) << "<Cat>" << " Destructor called" << std::endl;
}
Cat& Cat::operator=(const Cat &src) {
	this->type = src.type;
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << std::left;
	std::cout << std::setw(13) << "<Cat>" << " 🐱 Meowww.." << std::endl;
}