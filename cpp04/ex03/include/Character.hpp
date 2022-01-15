/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 21:17:59 by ybong             #+#    #+#             */
/*   Updated: 2022/01/16 01:48:48 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
class Character : public ICharacter
{

private:

	Character(void);
	
	std::string	name;
	int			equipNum;
	AMateria	*inventory[4];

public:

	Character(const std::string &name);
	Character(const Character &src);
	~Character(void);

	Character		&operator=(const Character &other);

	virtual void	equip(AMateria* m);
	virtual void	unequip(int idx);
	virtual void	use(int idx, ICharacter& target);

	virtual std::string	const	&getName() const;
	virtual int					getEquipNum(void) const;
	virtual AMateria			**getInventory(void);

};

#endif