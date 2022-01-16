#include "../include/Converter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	std::string input(argv[1]);
	Converter converter(input);
	const Converter &c = Converter(input);
	return 0;
}