#include "../include/Cat.hpp"

Cat::Cat(void) {
	std::cout << "<Cat> Default Constructor called" << std::endl;
}
Cat::Cat(const Cat &src) {
	this->type = src.type;
	std::cout << "<Cat> Copy Constructor called" << std::endl;
}
Cat::~Cat(void) {
	std::cout << "<Cat> Destructor called" << std::endl;
}
Cat& Cat::operator=(const Cat &src) {
	this->type = src.type;
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << "🐱 Meowww.." << std::endl;
}