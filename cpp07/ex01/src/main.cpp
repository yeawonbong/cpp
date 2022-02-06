/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:07:45 by ybong             #+#    #+#             */
/*   Updated: 2022/02/06 17:17:39 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Iter.hpp"
# include <iostream>

# define BLUE "\033[1;34m"
# define LBLUE "\033[34m"
# define GRAY "\033[1;30m"
# define RESET "\033[1;0m"
# define RED "\033[1;31m"

template <typename T>
void	print(T &arg) {
	std::cout << arg << std::endl;
}

template <typename T>
void 	plusOne(T &arg) {
	arg += 1;
}

int main(void) 
{
	{
		int arr[5] = {1, 2, 3, 4, 5};
		std::cout << BLUE << "Test int Array" << std::endl << RESET;
		iter(arr, 5, print);
		std::cout << GRAY << "Function [iter-plusOne] called" << std::endl << RESET;
		iter(arr, 5, plusOne);
		iter(arr, 5, print);
	}
	{
		std::cout << BLUE <<  "Test char Array" << std::endl << RESET;
		char arr[5] = {'a','b','c','d','e'};
		iter(arr, 5, print);
		std::cout << GRAY << "Function [iter-plusOne] called" << std::endl << RESET;
		iter(arr, 5, plusOne);
		iter(arr, 5, print);
	}	
	{
		std::cout << BLUE <<  "Test string Array" << std::endl << RESET;
		std::string arr[5] = {
			"one",
			"two",
			"three",
			"four",
			"five"
			};
		iter(arr, 5, print);
	}
	return 0;
}