#include "../include/FragTrap.hpp"

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "<FragTrap> " << this->name << " Constructor called" << std::endl;
}
FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) {
	*this = src;
	std::cout << "<FragTrap> " << this->name << " Copy Constructor called" << std::endl;
}
FragTrap::~FragTrap(void) {
	std::cout << "<FragTrap> " << this->name << " Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "<FragTrap> " << this->name << " 🙌 Give me a High Five!! 🙌" << std::endl;
}