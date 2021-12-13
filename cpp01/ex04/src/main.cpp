#include "replace.hpp"

int	main(int argc, char* argv[])
{
	std::ifstream	fin;

	if (argc != 4)
	{
		std::cout << "Invalid Input!" << std::endl;
		return (0);
	}
	fin.open(argv[1], std::ios_base::in);
	if (!fin.is_open())
	{
		std::cout << "Invalid Filename!" << std::endl;
		return (0);
	}
	while (!fin.eof())
	{
		
	}
}