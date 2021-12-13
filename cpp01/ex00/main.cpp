/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:20:41 by ybong             #+#    #+#             */
/*   Updated: 2021/12/10 16:20:42 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "======================================" << std::endl;
	std::cout << "Creating the first Zombie, Amy," << std::endl;
	std::cout << "on the Stack." << std::endl;
	{
		Zombie amy("Amy");
		amy.announce();
	}
	std::cout << "======================================" << std::endl;
	std::cout << "Creating the second Zombie, Bob," << std::endl;
	std::cout << "on the Heap, with function 'newZonbie()'" << std::endl;
	{
		Zombie	*bob = newZombie("Bob");
		bob->announce();
		delete bob;
	}
	std::cout << "======================================" << std::endl;
	std::cout << "Creating the third Zombie, Carol," << std::endl;
	std::cout << "on the Stack, with function 'randomChump()'" << std::endl;
	{
		randomChump("Carol");
	}
	return 0;
}