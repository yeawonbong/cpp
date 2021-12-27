/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 18:15:47 by ybong             #+#    #+#             */
/*   Updated: 2021/12/27 15:41:21 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
#include <iomanip>


class	Fixed 
{
private:
	int	fixedPointVal;
	static const int	fractionalBits = 8;
	
public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &src); // copy constructor
	~Fixed(void);

	/* Operator overload */
	Fixed 	&operator=(const Fixed &instance);
	// - comparison operators
	bool	operator>(const Fixed &instance);
	bool	operator<(const Fixed &instance);
	bool	operator>=(const Fixed &instance);
	bool	operator<=(const Fixed &instance);
	bool	operator==(const Fixed &instance);
	bool	operator!=(const Fixed &instance);
	// - arithmetic operators
	Fixed	operator+(const Fixed &instance);
	Fixed	operator-(const Fixed &instance);
	Fixed	operator*(const Fixed &instance);
	Fixed	operator/(const Fixed &instance);
	// - increment, decrement operators
	Fixed	operator++(void);
	Fixed	operator++(int);
	Fixed	operator--(void);
	Fixed	operator--(int);

	/* Member functions */
	int		toInt(void) const;
	float	toFloat(void) const;

	static Fixed		&min(Fixed &fpv1, Fixed &fpv2);
	static const Fixed	&min(const Fixed &fpv1, const Fixed &fpv2);
	static Fixed		&max(Fixed &fpv1, Fixed &fpv2);
	static const Fixed	&max(const Fixed &fpv1, const Fixed &fpv2);

	/* Getter Setter */
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &os, const Fixed &other);

#endif

