/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:00:56 by ybong             #+#    #+#             */
/*   Updated: 2021/12/17 19:18:59 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main(void)
{
	int 		N;
	std::string	name;
	Zombie	*zombies;

	std::cout << "How many Zombies do you want to create? :  ";
	std::cin >> N;
	if (std::cin.fail() || N < 1)
	{
		std::cout << "Invalid Input!" << std::endl;
		return 0;
	}
	std::cout << "Set the name of Zombies :  ";
	std::cin >> name;
	std::cout << "Calling function zombieHorde..." << std::endl;
	zombies = zombieHorde(N, name);
	std::cout << "Zombies' Info" << std::endl;
	for(int i=0; i < N; i++)
		zombies[i].announce();
	delete[] zombies;
	return 0;
}