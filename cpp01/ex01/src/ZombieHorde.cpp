/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:24:22 by ybong             #+#    #+#             */
/*   Updated: 2021/12/17 19:24:23 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zArr = new Zombie[N];

	for (int i=0; i < N; i++)
	{
		zArr[i].setName(name + std::to_string(i + 1));
	}
	return	zArr;
}
