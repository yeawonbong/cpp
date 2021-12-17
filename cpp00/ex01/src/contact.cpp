/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:09:13 by ybong             #+#    #+#             */
/*   Updated: 2021/12/17 19:25:18 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phoneBook.hpp"

Contact::Contact(){}

Contact::Contact(int i)
{
	i=0;
	std::cout << "Input First Name : ";
	std::cin >> first_name;
	std::cout << "Input Last Name : ";
	std::cin >> last_name;
	std::cout << "Input Nickname : ";
	std::cin >> nickname;
	std::cout << "Input Phone Number (digit only): ";
	std::cin >> phone_number;
	for (int i=0; i < (int)phone_number.length(); i++)
	{
		if (isdigit(phone_number.at(i)) == 0)
		{
			phone_number = "Err";
			std::cout << "DIGIT ONLY!!!!!" << std::endl;
			return;
		}	
	}
	std::cout << "Input Darkest Secret : ";
	std::cin >> darkest_secret;
}


std::string	Contact::getFirstName(){return first_name;};
std::string	Contact::getLastName(){return last_name;};
std::string	Contact::getNickName(){return nickname;};
std::string	Contact::getPhoneNumber(){return phone_number;};
std::string	Contact::getDarkestSecret(){return darkest_secret;};

