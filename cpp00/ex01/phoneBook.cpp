#include "phoneBook.hpp"

void Phonebook::add(Contact con)
{

}

int	main(void)
{
	// Contact	phonebook[8];
	PhoneBook pb;

	std::string cmd;
	while (1)
	{
		std::cout << "===============================================\n";
		std::cout << "	My Awsome Phone Book\n";
		std::cout << "===============================================\n";
		std::cout << "Input Command (ADD/SEARCH/EXIT) : ";
		std::cin >> cmd;
		if (cmd == "EXIT")
			return 0;
		if (cmd == "ADD")
		{
			pb.add()
		}
	}
}