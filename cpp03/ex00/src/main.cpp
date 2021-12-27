/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:22:49 by ybong             #+#    #+#             */
/*   Updated: 2021/12/27 17:22:50 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int	main( void )
{
	ClapTrap clap("CLAP");
	ClapTrap trap(clap);
	clap.attack("TRAP");
	clap.takeDamage(9);
	clap.beRepaired(15);
	clap.takeDamage(8);
	clap.beRepaired(2);
	clap.takeDamage(15);
}