/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:31:33 by ybong             #+#    #+#             */
/*   Updated: 2021/12/31 23:09:13 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::~Animal(void) {
	std::cout << std::left;
	std::cout << std::setw(13) << "<Animal>" << " Destructor called" << std::endl;
}
Animal& Animal::operator=(const Animal &src) {
	std::cout << "<Animal> assignment operator called" << std::endl;
	this->type = src.type;
	return *this;
}

const std::string	&Animal::getType(void) const {
	return this->type;
}
