/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:45:08 by ybong             #+#    #+#             */
/*   Updated: 2021/12/31 17:09:17 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{
private:
	std::string name;
	DiamondTrap(void);

public:
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap &src);
	~DiamondTrap(void);
	DiamondTrap	&operator=(const DiamondTrap &other);
	void	attack(std::string const &target);
	void	whoAmI(void) const;
};

#endif