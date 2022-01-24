/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:26:58 by ybong             #+#    #+#             */
/*   Updated: 2022/01/22 16:26:58 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

template <typename T>
bool MutantStack<T>::verbose = false;

template <typename T>
MutantStack<T>::MutantStack() {
	if (verbose)
		std::cout << "Default Constructor called" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &src) {
	if (verbose)
		std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}

template <typename T>
MutantStack<T>::~MutantStack() {
	if (verbose)
		std::cout << "Destructor called" << std::endl;
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &src) {
	if (verbose)
		std::cout << "Assignment Operator called" << std::endl;
	this->numbers = src.numbers;
	return *this;
}


