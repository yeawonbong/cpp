#include "../include/replace.hpp"

int	replace(char* argv[])
{
	std::ifstream	fileIn; // input file stream
	std::ofstream	fileOut; // output file stream
	char	line[BUFFER_SIZE];
	char*	ptr;
	int		pos;

	fileIn.open(argv[1], std::ios_base::in);
	fileOut.open((((std::string)argv[1]).append(".replace")));
	if (!fileIn.is_open() || !fileOut.is_open())
	{
		std::cout << "Invalid Filename!" << std::endl;
		return (1);
	}
	while (!fileIn.eof())
	{
		fileIn.getline(line, BUFFER_SIZE);
		ptr = line;
		while (*ptr)
		{
			pos = ((std::string)ptr).find(argv[2],0); // 문자 찾음
			if (pos == std::string::npos)
			{
				fileOut << ptr;
				break;
			}
			fileOut << ((std::string)ptr).substr(0, pos);
			fileOut << argv[3];
			ptr += (pos + strlen(argv[2]));
		}
		if (!fileIn.eof())
			fileOut << std::endl;
	}
	return (0);
}

int	main(int argc, char* argv[])
{
	if (argc != 4)
	{
		std::cout << "Invalid Input!" << std::endl;
		return (0);
	}
	replace(argv);
}