#include "../include/Brain.hpp"

Brain::Brain(void) {
	std::cout << std::left;
	std::cout << std::setw(13) << "<Brain>" << " Default Constructor called" << std::endl;
}
Brain::Brain(const Brain &src) {
	*this = src;
	std::cout << std::left;
	std::cout << std::setw(13) << "<Brain>" << " Copy Constructor called" << std::endl;
}
Brain::~Brain(void) {
	std::cout << std::left;
	std::cout << std::setw(13) << "<Brain>" << " Destructor called" << std::endl;
}
Brain& Brain::operator=(const Brain &src) {
	std::cout << "<Brain> assignment operator called" << std::endl;
	for (int i=0; i < 100; i++) {
		this->ideas[i] = src.ideas[i]; // 깊은 복사임
	}
	return *this;
}