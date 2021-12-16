#include "replace.hpp"

int	replace(char* argv[])
{
	std::ifstream	fileIn; // input file stream
	std::ofstream	fileOut; // output file stream
	char	line[BUFFER_SIZE];

	fileIn.open(argv[1], std::ios_base::in);
	fileOut.open((argv[1] + ".replace"));
	if (!fileIn.is_open())
	{
		std::cout << "Invalid Filename!" << std::endl;
		return (1);
	}
	int pos;
	while (!fileIn.eof())
	{
		fileIn.getline(line, BUFFER_SIZE);
		std::string str(line);
		pos = str.find(argv[2],0); // 문자 찾음
		// ou
	}
}

int	main(int argc, char* argv[])
{


	if (argc != 4)
	{
		std::cout << "Invalid Input!" << std::endl;
		return (0);
	}

	
}