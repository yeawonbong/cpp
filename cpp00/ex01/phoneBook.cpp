/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:09:22 by ybong             #+#    #+#             */
/*   Updated: 2021/12/01 17:09:22 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

PhoneBook::PhoneBook() : count(0){}

void	PhoneBook::add()
{
	Contact contact(NEW);

	if (contact.getPhoneNumber() == "Err")
		return;
	if (count < 8)
	{
		pb[count] = contact;
		count++;
	}
	else if (count == 8)
	{
		for (int i=0; i < 7; i++)
		{
			pb[i] = pb[i + 1];
		}
		pb[7] = contact;
	}
}

void	PhoneBook::search()
{
	int idx;

	if (count == 0)
	{
		std::cout << "The PhoneBook is empty!" << std::endl;
		return;
	}
	std::cout << "|";
	format_cout("INDEX");
	format_cout("FIRST NAME");
	format_cout("LAST NAME");
	format_cout("NICKNAME");
	std::cout << std::endl;
	for (int i=0; i < count; i++)
	{
		std::cout << "|";
		format_cout(std::to_string(i));
		format_cout(pb[i].getFirstName());
		format_cout(pb[i].getLastName());
		format_cout(pb[i].getNickName());
		std::cout << std::endl;
	}
	std::cout << "> What contact do you want to see? (put INDEX number..) " << std::endl;
	std::cin >> idx;
	if (idx >= count || std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(100, '\n');
		std::cout << "> Invalid INDEX number!" << std::endl;
		return;
	}
	std::cout << "|> CONTACT INFO" << std::endl;
	std::cout << "|  First Name: ";
	std::cout << pb[idx].getFirstName() << std::endl;
	std::cout << "|  Last Name: ";
	std::cout << pb[idx].getLastName() << std::endl;
	std::cout << "|  Nickname: ";
	std::cout << pb[idx].getNickName() << std::endl;
	std::cout << "|  Phone Number: ";
	std::cout << pb[idx].getPhoneNumber() << std::endl;
	std::cout << "|  Darkest Secret: ";
	std::cout << pb[idx].getDarkestSecret() << std::endl;
	return;
}
 
void	PhoneBook::format_cout(std::string str)
{
	if (str.length() > 10)
	{
		std::cout << str.substr(0,9);
		std::cout << ".|";
	}
	else
	{
		std::cout << std::setw(10) << str;
		std::cout << "|";
	}
}
