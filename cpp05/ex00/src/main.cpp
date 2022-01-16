/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:03:22 by ybong             #+#    #+#             */
/*   Updated: 2022/01/16 16:03:23 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main(void) {
	Bureaucrat::verbose = false;

	std::cout << std::endl;
	std::cout << "<Testing decrement function>" << std::endl;
	try
	{
		Bureaucrat test("test", 149);
		std::cout << test;
		test.decrement();
		std::cout << test;
		test.decrement();
		std::cout << test;
	}
	catch (std::exception &e)
	{
		std::cout << BLUE << "Exception: " << e.what() << std::endl << RESET;
	}

	std::cout << std::endl;
	std::cout << "<Testing increment function>" << std::endl;
	try
	{
		Bureaucrat test1("test1", 3);
		test1.increment();
		std::cout << test1;
		test1.increment();
		std::cout << test1;
		test1.increment();
		std::cout << test1;
	}
	catch (std::exception &e)
	{
		std::cout << BLUE << "Exception: " << e.what() << std::endl << RESET;
	}

	std::cout << std::endl;
	std::cout << "<Testing High Val>" << std::endl;
	try
	{
		Bureaucrat		test2 = Bureaucrat("test2", 0);
		std::cout << test2;
		test2.decrement();
	}
	catch (std::exception &e)
	{
		std::cout << BLUE << "Exception: " << e.what() << std::endl << RESET;
	}
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "<Testing Low Val>" << std::endl;
	try
	{
		Bureaucrat		test2 = Bureaucrat("test2", 151);
		std::cout << test2;
		test2.increment();
	}
	catch (std::exception &e)
	{
		std::cout << BLUE << "Exception: " << e.what() << std::endl << RESET;
	}
	std::cout << std::endl;
}