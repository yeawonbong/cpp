/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:28:34 by ybong             #+#    #+#             */
/*   Updated: 2022/01/22 16:24:28 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Span.hpp"
# include <vector>

# define BLUE "\033[1;34m"
# define LBLUE "\033[34m"
# define GRAY "\033[1;30m"
# define RED "\033[1;31m"
# define RESET "\033[1;0m"

int main(void)
{
	std::cout << GRAY << "<Default Test>" << std::endl << RESET;
	try {
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << BLUE << sp.shortestSpan() << std::endl << RESET;
		std::cout << BLUE << sp.longestSpan() << std::endl << RESET;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << std::endl << RESET;
	}
	std::cout << GRAY << "<10000 Number Test>" << std::endl << RESET;
	try {
		Span sp = Span(10000);
		for (int i=0; i < 10000; i++) {
			sp.addNumber(i);
		}
		std::cout << BLUE << sp.shortestSpan() << std::endl << RESET;
		std::cout << BLUE << sp.longestSpan() << std::endl << RESET;
		// for (int i=0; i < 10000; i++) {
		// 	std::cout << BLUE << sp.getNumbers()[i] << " " << RESET;
		// }
		// std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << std::endl << RESET;
	}	

	std::cout << GRAY << "<Add Number Test>" << std::endl << RESET;
	try {
		Span sp = Span(5);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
		sp.addNumber(4);
		sp.addNumber(5);
		for (int i=0; i < 5; i++) {
			std::cout << BLUE << sp.getNumbers()[i] << " " << RESET;
		}
		std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << std::endl << RESET;
	}
	std::cout << GRAY << "<Duplicate Number Test>" << std::endl << RESET;
	try {
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(3);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << std::endl << RESET;
	}
	std::cout << GRAY << "<Over size Test>" << std::endl << RESET;
	try {
		Span sp = Span(3);
		sp.addNumber(5);
		sp.addNumber(100);
		sp.addNumber(3);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << std::endl << RESET;
	}
	std::cout << GRAY << "<No Span Test>" << std::endl << RESET;
	try {
		Span sp = Span(5);
		sp.addNumber(5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << e.what() << std::endl << RESET;
	}
	return 0;
}