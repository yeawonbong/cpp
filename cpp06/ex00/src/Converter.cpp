#include "../include/Converter.hpp"

Converter::Converter(void) {
	// if (Converter::verbose)
	std::cout << "<Converter> Default Constructor called" << std::endl;
}

Converter::Converter(std::string literalVal) {
	// if (Converter::verbose)
	std::cout << "<Converter> Standard Constructor called" << std::endl;
}