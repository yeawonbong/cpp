#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook pb;

	std::string cmd;
	while (1)
	{
		std::cout << "===============================================\n";
		std::cout << "	      My Awsome Phone Book\n";
		std::cout << "===============================================\n";
		std::cout << "Input Command (ADD/SEARCH/EXIT) : ";
		std::cin >> cmd;
		if (cmd == "EXIT")
			return 0;
		if (cmd == "ADD")
			pb.add();
		else if (cmd == "SEARCH")
			pb.search();
	}
}