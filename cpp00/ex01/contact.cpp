#include "phoneBook.hpp"

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