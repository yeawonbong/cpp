/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:22:58 by ybong             #+#    #+#             */
/*   Updated: 2021/12/29 20:45:41 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
	std::string	name;
	int	hitPoints;
	int	energyPoints;
	int attackDamage;

	ClapTrap(void);

public:

	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &src);
	~ClapTrap(void);
	ClapTrap	&operator=(const ClapTrap &other);

	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
