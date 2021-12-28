#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

// class ScavTrap : public ClapTrap
// {

// public:

// 	ScavTrap( const std::string name );
// 	ScavTrap( const ScavTrap &src );
// 	~ScavTrap( void );

// 	ScavTrap	&operator=( const ScavTrap &other );

// 	void	attack( const std::string &target );
// 	void	guardGate( void );

// private:

// 	ScavTrap( void );

// };


class ScavTrap : public ClapTrap
{
private:
	ScavTrap(void);
public:
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &src);
	~ScavTrap(void);

	void	attack(const std::string &target);
	void	guardGate(void);
};

#endif