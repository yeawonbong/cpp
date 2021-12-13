/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:03:53 by ybong             #+#    #+#             */
/*   Updated: 2021/12/10 18:17:14 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "The address of string:		" << &str << std::endl;
	std::cout << "The address of stringPTR:	" << stringPTR << std::endl;
	std::cout << "The address of stringREF:	" << &stringREF << std::endl;
	std::cout << "The string itself:		" << str << std::endl;
	std::cout << "The string using stringPTR:	" << *stringPTR << std::endl;
	std::cout << "The string using stringREF:	" << stringREF << std::endl;
	return 0;
}
