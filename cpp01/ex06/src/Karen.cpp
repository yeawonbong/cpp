/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:23:14 by ybong             #+#    #+#             */
/*   Updated: 2021/12/17 19:23:15 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Karen.hpp"

void Karen::filter(std::string level)
{
	std::string levelArr[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for(int i=0; i<4; i++)
	{
		if(levelArr[i] == level)
		{
			switch (i)
			{
			case 0 : this->debug();
			case 1 : this->info();
			case 2 : this->warning();			
			default: this->error();
				return;
			}
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Karen::debug(void)
{
	std::cout <<  "[ DEBUG ]\nI love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ERROR]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
}
