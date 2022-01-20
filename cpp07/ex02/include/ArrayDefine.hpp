/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ArrayDefine.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:07:48 by ybong             #+#    #+#             */
/*   Updated: 2022/01/20 18:03:06 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAYDEFINE_HPP
# define ARRAYDEFINE_HPP

# include "Array.hpp"
#define BLUE "\033[1;34m"
#define LBLUE "\033[34m"
#define GRAY "\033[1;30m"
#define RESET "\033[1;0m"
#define RED "\033[1;31m"

template <typename T>
bool Array<T>::verbose = true;

template <typename T>
Array<T>::Array() : array(new T[0]), arrSize(0) {
	if (verbose)
		std::cout << GRAY <<"Default constructor called" << std::endl << RESET;
}

template <typename T>
Array<T>::Array(unsigned int n) : array(new T[n]), arrSize(n) {
	if (verbose)
		std::cout << GRAY <<"Constructor with arrSize called" << std::endl << RESET;
}

template <typename T>
Array<T>::Array(const Array<T> &src) : array(new T[0]) {
	if (verbose)
		std::cout << GRAY <<"Copy Constructor called" << std::endl << RESET;
	*this = src;
}

template <typename T>
Array<T>::~Array() {
	if (verbose)
		std::cout << GRAY <<"Destructor called" << std::endl << RESET;
	delete []array;
}

template <typename T>
T	*Array<T>::getArray() const {
	return this->array;
}
template <typename T>
unsigned int	Array<T>::size() const {
	return this->arrSize;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &src) {
	if (verbose)
		std::cout << GRAY <<"Assignment Operator called" << std::endl << RESET;
	arrSize = src.size();
	delete[] array;
	array = new T[arrSize];
	for (unsigned int i=0; i < arrSize; i++) {
		array[i] = src.getArray()[i];
	}
	return *this;
}

template <typename T>
T	&Array<T>::operator[](const unsigned int idx) const throw(std::overflow_error) {
	if (arrSize <= idx)
		throw std::overflow_error("Index out of bounds");
	return array[idx];
}

#endif