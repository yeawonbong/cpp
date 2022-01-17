/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:54:30 by ybong             #+#    #+#             */
/*   Updated: 2022/01/17 20:08:24 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/A.hpp"

A::A() {
	if (Base::verbose)
		std::cout << "<A> Default Constructor called" << std::endl;
}

A::A(const A &src) {
	(void)src;
	if (Base::verbose)
		std::cout << "<A> Copy Constructor called" << std::endl;
}

A::~A() {
	if (Base::verbose)
		std::cout << "<A> Destructor called" << std::endl;
}

A	&A::operator=(const A &src) {
	(void)src;
	if (Base::verbose)
		std::cout << "<A> Assignment Operator called" << std::endl;
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, const A &instance) {
	(void)instance;
	ostream << "This is A class" << std::endl;
	return ostream;
}