/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:18:53 by ybong             #+#    #+#             */
/*   Updated: 2022/01/24 20:20:03 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Converter.hpp"

int main(int argc, char **argv)
{
	Converter::verbose = true;
	try 
	{
		if (argc != 2)
			throw Converter::InvalidInputException();
		std::string input(argv[1]);
		Converter converter(input);
		converter.convert();
		converter.printVals();
	}
	catch(std::exception &e) 
	{
		std::cout << RED << "Exception: " << e.what() << std::endl << RESET;
	}
	return 0;
}