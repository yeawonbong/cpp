#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class ICharacter
{
public:

	virtual ~ICharacter() {}
	virtual void	equip(AMateria* m) = 0;
	virtual void	unequip(int idx) = 0;
	virtual void	use(int idx, ICharacter& target) = 0;
	
	virtual std::string const	&getName() const = 0;
	virtual int					getEquipNum(void) const = 0;
	virtual AMateria			**getInventory(void) = 0;
};

#endif