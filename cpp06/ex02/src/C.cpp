/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 19:54:35 by ybong             #+#    #+#             */
/*   Updated: 2022/01/17 20:08:41 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/C.hpp"

C::C() {
	if (Base::verbose)
		std::cout << "<C> Default Constructor called" << std::endl;
}

C::C(const C &src) {
	(void)src;
	if (Base::verbose)
		std::cout << "<C> Copy Constructor called" << std::endl;
}

C::~C() {
	if (Base::verbose)
		std::cout << "<C> Destructor called" << std::endl;
}

C	&C::operator=(const C &src) {
	(void)src;
	if (Base::verbose)
		std::cout << "<C> Assignment Operator called" << std::endl;
	return *this;
}

std::ostream	&operator<<(std::ostream &ostream, const C &instance) {
	(void)instance;
	ostream << "This is C class" << std::endl;
	return ostream;
}