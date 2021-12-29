/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 18:22:13 by ybong             #+#    #+#             */
/*   Updated: 2021/12/29 19:51:27 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
	ScavTrap(void);
public:
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &src);
	~ScavTrap(void);
	ScavTrap	&operator=(const ScavTrap &other);
	
	void	attack(const std::string &target);
	void	guardGate(void);
};

#endif