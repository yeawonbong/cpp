/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:54:32 by ybong             #+#    #+#             */
/*   Updated: 2022/01/17 20:08:34 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/B.hpp"

B::B() {
	if (Base::verbose)
		std::cout << "<B> Default Constructor called" << std::endl;
}

B::B(const B &src) {
	(void)src;
	if (Base::verbose)
		std::cout << "<B> Copy Constructor called" << std::endl;
}

B::~B() {
	if (Base::verbose)
		std::cout << "<B> Destructor called" << std::endl;
}

B	&B::operator=(const B &src) {
	(void)src;
	if (Base::verbose)
		std::cout << "<B> Assignment Operator called" << std::endl;
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, const B &instance) {
	(void)instance;
	ostream << "This is B class" << std::endl;
	return ostream;
}