/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:25:00 by ybong             #+#    #+#             */
/*   Updated: 2021/12/31 18:25:01 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat(void) {
	this->type = "WRONG_CAT";
	std::cout << std::left;
	std::cout << std::setw(13) << "<WrongCat>" << " Default Constructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &src) {
	this->type = src.type;
	std::cout << std::left;
	std::cout << std::setw(13) << "<WrongCat>" << " Copy Constructor called" << std::endl;
}
WrongCat::~WrongCat(void) {
	std::cout << std::left;
	std::cout << std::setw(13) << "<WrongCat>" << " Destructor called" << std::endl;
}

void WrongCat::makeSound(void) const {
	std::cout << std::left;
	std::cout << std::setw(13) << "<WrongCat>" << " ?🐱 Meowww.." << std::endl;
}