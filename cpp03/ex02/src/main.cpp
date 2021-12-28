/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:22:49 by ybong             #+#    #+#             */
/*   Updated: 2021/12/28 15:40:50 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int	main( void )
{
	{
		ClapTrap clap("CLAP");
		ClapTrap trap(clap);
		clap.attack("TRAP");
		clap.takeDamage(9);
		clap.beRepaired(15);
		clap.takeDamage(8);
		clap.beRepaired(2);
		clap.takeDamage(15);
		std::cout << std::endl;
	}
	{
		ScavTrap scav("SCAV");
		ScavTrap strap(scav);
		scav.takeDamage(9);
		scav.beRepaired(15);
		scav.takeDamage(8);
		scav.beRepaired(2);
		scav.takeDamage(15);
		scav.guardGate();
	}
}