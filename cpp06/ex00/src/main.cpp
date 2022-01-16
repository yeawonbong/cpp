#include "../include/Converter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	std::string input(argv[1]);
	Converter converter(input);
	try {
		converter.convert();
		converter.printVals();
	}
	catch(std::exception &e) {
		std::cout << RED << "Exception: " << e.what() << std::endl << RESET;
	}
	return 0;
}