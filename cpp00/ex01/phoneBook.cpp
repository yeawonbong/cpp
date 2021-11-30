#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){count = 0;}

Contact *PhoneBook::getPb(){return pb;}
int		PhoneBook::getCount(){return count;}


void	PhoneBook::add()
{
	Contact contact(NEW);

	if (count < 8)
		pb[count] = contact;
	else if (count == 8)
	{
		for (int i=0; i < 7; i++)
		{
			pb[i] = pb[i + 1];
		}
		pb[7] = contact;
	}
	count++;
}

void	PhoneBook::search()
{
	int idx;

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
	std::cout << "What contact do you want to see? (put INDEX number..) ";
	std::cin >> idx;
	std::cout << "|CONTACT INFO" << std::endl;
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