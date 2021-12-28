#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{
private:
	DiamondTrap(void);

public:
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap &src);
	~DiamondTrap(void);
};

#endif