/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ArrayDefine.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:07:48 by ybong             #+#    #+#             */
/*   Updated: 2022/01/18 18:47:19 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAYDEFINE_HPP
# define ARRAYDEFINE_HPP

# include "Array.hpp"

template <typename T>
bool Array<T>::verbose = true;

template <typename T>
Array<T>::Array() : array(new T[0]), arrSize(0) {
	if (verbose)
		std::cout << "Default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : array(new T[n]), arrSize(n) {
	if (verbose)
		std::cout << "Constructor with arrSize called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array<T> &src) : array(new T[0]) {
	if (verbose)
		std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}

template <typename T>
Array<T>::~Array() {
	if (verbose)
		std::cout << "Destructor called" << std::endl;
	delete array;
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
		std::cout << "Assignment Operator called" << std::endl;
	arrSize = src.size();
	delete array;
	array = new T[arrSize];
	for (unsigned int i=0; i < arrSize; i++) {
		array[i] = src.getArray()[i];
	}
	return *this;
}

template <typename T>
T	&Array<T>::operator[](const unsigned int idx) const throw(std::exception) {
	try {
		if (arrSize <= idx)
			throw std::exception(){
			public:
				const char* what() const throw() {
					return "index is out of the limits!";
			};
		}
	}
	catch ()

}

#endif