#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

#define NEW 42

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	Contact();
	Contact(int i);

	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickName();
	std::string	getPhoneNumber();
	std::string	getDarkestSecret();
	
};

class PhoneBook
{
private:
	Contact pb[8];
	int		count;

public:
	PhoneBook();
	void	add();
	void	search();
	Contact	*getPb();
	int		getCount();
	void	format_cout(std::string str);
};
#endif