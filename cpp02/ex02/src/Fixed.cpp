/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 18:15:40 by ybong             #+#    #+#             */
/*   Updated: 2021/12/27 15:31:41 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

// Constructor, Destructor
Fixed::Fixed(void) : fixedPointVal(0) {
}

Fixed::Fixed(const int value) {
	this->fixedPointVal = value << this->fractionalBits;
}
Fixed::Fixed(const float value) {
	fixedPointVal = roundf(value * (1 << fractionalBits));
}

Fixed::Fixed(const Fixed &src) {
	*this = src;
}

Fixed::~Fixed(void) {
}

/* Operator overload */
Fixed	&Fixed::operator=(const Fixed &other) {
	setRawBits(other.getRawBits());
	return *this;
}

// - comparison operators
bool	Fixed::operator>(const Fixed &instance) {
	return (this->getRawBits() > instance.getRawBits());
}
bool	Fixed::operator<(const Fixed &instance) {
	return (this->getRawBits() < instance.getRawBits());
}
bool	Fixed::operator>=(const Fixed &instance) {
	return (this->getRawBits() >= instance.getRawBits());
}
bool	Fixed::operator<=(const Fixed &instance) {
	return (this->getRawBits() <= instance.getRawBits());	
}
bool	Fixed::operator==(const Fixed &instance) {
	return (this->getRawBits() == instance.getRawBits());
}
bool	Fixed::operator!=(const Fixed &instance) {
	return (this->getRawBits() != instance.getRawBits());
}

// - arithmetic operators
Fixed 	Fixed::operator+(const Fixed &instance) {
	Fixed	res;

	res.setRawBits(this->getRawBits() + instance.getRawBits());
	return (res);
}
Fixed 	Fixed::operator-(const Fixed &instance) {
	Fixed	res;

	res.setRawBits(this->getRawBits() - instance.getRawBits());
	return (res);
}
Fixed 	Fixed::operator*(const Fixed &instance) {
	Fixed	res(this->toFloat() * instance.toFloat());
	return (res);
}
Fixed 	Fixed::operator/(const Fixed &instance) {
	Fixed	res(this->toFloat() / instance.toFloat());
	return (res);
}

// - increment, decrement operators
Fixed 	Fixed::operator++(void) {
	this->fixedPointVal++;
	return (*this);
}
Fixed 	Fixed::operator++(int) {
	Fixed	old(*this);

	this->fixedPointVal++;
	return (old);
}
Fixed 	Fixed::operator--(void) {
	this->fixedPointVal--;
	return (*this);	
}
Fixed 	Fixed::operator--(int) {
	Fixed	old(*this);

	this->fixedPointVal--;
	return (old);
}

// Member functions
float	Fixed::toFloat(void) const {
	return (float)fixedPointVal / (1 << fractionalBits);
}

int		Fixed::toInt(void) const {
	return fixedPointVal >> fractionalBits;
}

Fixed	&Fixed::min(Fixed &fpv1, Fixed &fpv2) {
	if (fpv1 > fpv2)
		return fpv2;
	return fpv1;
}
const Fixed	&Fixed::min(const Fixed &fpv1, const Fixed &fpv2) {
	if ((Fixed)fpv1 > fpv2)
		return fpv2;
	return fpv1;
}

Fixed	&Fixed::max(Fixed &fpv1, Fixed &fpv2) {
	if (fpv1 < fpv2)
		return fpv2;
	return fpv1;
}
const Fixed	&Fixed::max(const Fixed &fpv1, const Fixed &fpv2) {
	if ((Fixed)fpv1 < fpv2)
		return fpv2;
	return fpv1;
}

// getter, setter
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