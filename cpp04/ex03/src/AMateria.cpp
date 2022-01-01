#include "../include/AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type){
	std::cout << std::setw(17) << std::left << "<AMaterial>" << "String constructor called" << std::endl;
}
AMateria	&AMateria::operator=(const AMateria &other) {
	this->type = other.type;
	return *this;
}
std::string const &AMateria::getType(void) const {
	return this->type;
}