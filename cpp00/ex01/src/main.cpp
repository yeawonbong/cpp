/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:09:17 by ybong             #+#    #+#             */
/*   Updated: 2021/12/17 19:25:27 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phoneBook.hpp"

int	main(void)
{
	PhoneBook pb;

	std::string cmd;
	std::cout << "===============================================\n";
	std::cout << "	      My Awsome Phone Book\n";
	std::cout << "===============================================\n";
	while (1)
	{
		std::cout << "> Input Command (ADD/SEARCH/EXIT) : ";
		std::cin >> cmd;
		if (cmd == "EXIT")
			return 0;
		if (cmd == "ADD")
			pb.add();
		else if (cmd == "SEARCH")
			pb.search();
		else
			std::cout << "> Invalid Command!" << std::endl;
	}
}
