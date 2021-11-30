#include "PhoneBook.hpp"

Contact::Contact(){}

Contact::Contact(int i)
{
	std::cout << "Input First Name : ";
	std::cin >> first_name;
	std::cout << "Input Last Name : ";
	std::cin >> last_name;
	std::cout << "Input Nickname : ";
	std::cin >> nickname;
	std::cout << "Input Phone Number : ";
	std::cin >> phone_number;
	std::cout << "Input Darkest Secret : ";
	std::cin >> darkest_secret;
}


std::string	Contact::getFirstName(){return first_name;};
std::string	Contact::getLastName(){return last_name;};
std::string	Contact::getNickName(){return nickname;};
std::string	Contact::getPhoneNumber(){return phone_number;};
std::string	Contact::getDarkestSecret(){return darkest_secret;};

