/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:07:48 by ybong             #+#    #+#             */
/*   Updated: 2022/01/19 18:39:26 by ybong            ###   ########.fr       */
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

	T	*getArray() const;
	unsigned int	size() const;

	Array	&operator=(const Array &src);
	T		&operator[](const unsigned int idx) const throw(std::overflow_error);
	static bool	verbose;

};

#endif

/*
- operator[] exception handling 하는 중이었음. - overflow_error exception inherit 할것. 
- operator 오버로드 완성하고, main catch 영역 생각 
- 처음에 생성 시 인자 받을 떄 out of limits 되는 지 에러처리
*/