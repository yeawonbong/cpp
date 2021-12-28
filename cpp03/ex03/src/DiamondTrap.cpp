#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {}
DiamondTrap::DiamondTrap(const std::string name) {
	this->name = name+ClapTrap::name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = ScavTrap::attackDamage;
	std::cout << "<DiamondTrap> " << this->name << " Constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src) {
	*this = src;
	std::cout << "<DiamondTrap> " << this->name << " Copy Constructor called" << std::endl;
}
DiamondTrap::~DiamondTrap(void) {
	std::cout << "<DiamondTrap> " << this->name << " Destructor called" << std::endl;
}

void	ScavTrap::attack(std::string const &target) {
	if (this->hitPoints <= 0) {
		std::cout << "<DiamondTrap>  " << this->name << "has no hit points to attack!" << std::endl;
		return;
	}
	this->hitPoints -= 1;
	std::cout << "<DiamondTrap> " << this->name << " attacks " << target \
	<< ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

