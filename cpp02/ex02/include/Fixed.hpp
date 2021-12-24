/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 18:15:47 by ybong             #+#    #+#             */
/*   Updated: 2021/12/24 16:31:36 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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

	// Operator overload
	Fixed 	&operator=(const Fixed &other); 
	float	toFloat(void) const;
	int		toInt(void) const;


	// Getter Setter
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &os, const Fixed &other);

#endif

	// Compare func - Class overload 
	static int	&min(int fpv1, int fpv2);
	static const int	&min(const int &fpv1, const int &fpv2);
	
	static int	&max(int fpv1, int fpv2);
	static const int	&max(const int &fpv1, const int &fpv2);
	static int			max(Fixed f1, Fixed f2);
