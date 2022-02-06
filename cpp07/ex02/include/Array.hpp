/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:07:48 by ybong             #+#    #+#             */
/*   Updated: 2022/02/06 17:00:34 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template <typename T> 
class Array
{

private:
	T				*array;
	unsigned int	arrSize;

public:

	Array();
	Array(unsigned int n);
	Array(const Array &src);
	~Array();

	T				*getArray() const;
	unsigned int	size() const;

	Array	&operator=(const Array &src);
	T		&operator[](const unsigned int idx) const throw(std::overflow_error);
	
	static bool	verbose;

};

#endif
