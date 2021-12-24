/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 18:15:40 by ybong             #+#    #+#             */
/*   Updated: 2021/12/24 16:30:06 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

// Constructor, Destructor
Fixed::Fixed(void) : fixedPointVal(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointVal = value << this->fractionalBits;
}
Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	fixedPointVal = roundf(value * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

// Operator overload
Fixed	&Fixed::operator=(const Fixed &other) {
	std::cout << "Assignation operator called" << std::endl;
	setRawBits(other.getRawBits());
	return *this;
}

// Compare functions
static int	&Fixed::min(int fpv1, int fpv2) {
	if (fpv1 > fpv2)
		return fpv2;
	return fpv1;
}
const int	&Fixed::min(const int &fpv1, const int &fpv2) {
	if (fpv1 > fpv2)
		return fpv2;
	return fpv1;
}

static int	&Fixed::max(int fpv1, int fpv2) {
	if (fpv1 < fpv2)
		return fpv2;
	return fpv1;
}
const int	&Fixed::max(const int &fpv1, const int &fpv2) {
	if (fpv1 < fpv2)
		return fpv2;
	return fpv1;
}
int			Fixed::max(Fixed f1, Fixed f2) {
	if (f1.fixedPointVal < f2.fixedPointVal)
		return f2;
	return f1;
}


// Member functions
float	Fixed::toFloat(void) const {
	return (float)fixedPointVal / (1 << fractionalBits);
}

int		Fixed::toInt(void) const {
	return fixedPointVal >> fractionalBits;
}

int		Fixed::getRawBits(void) const {
	return fixedPointVal;
}

void	Fixed::setRawBits(int const raw) {
	fixedPointVal = raw;
}

std::ostream	&operator<<(std::ostream& os, const Fixed &instance) {
	os << instance.toFloat();
	return os;
}