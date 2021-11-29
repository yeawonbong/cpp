#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	int	order=0;

public:
	Contact(int order)
	{
		this.order = order;
	}
	void	new_contact()
	{
		
	}
	
};

class PhoneBook
{
	private:
	Contact phoneBook[8];

	public:
	PhoneBook();
	void	add(Contact con);
	void	search(void);
};
#endif