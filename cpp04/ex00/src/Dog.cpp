#include "../include/Dog.hpp"

Dog::Dog(void) {
	std::cout << "<Dog> Default Constructor called" << std::endl;
}
Dog::Dog(const Dog &src) {
	this->type = src.type;
	std::cout << "<Dog> Copy Constructor called" << std::endl;
}
Dog::~Dog(void) {
	std::cout << "<Dog> Destructor called" << std::endl;
}
Dog& Dog::operator=(const Dog &src) {
	this->type = src.type;
	return *this;
}

void	Dog::makeSound(void) const {
	std::cout << "🐶 Woof!" << std::endl;
}