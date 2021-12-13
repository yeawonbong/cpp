/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:24:41 by ybong             #+#    #+#             */
/*   Updated: 2021/12/10 17:14:05 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name) //생성자 정의
{
}

Zombie::~Zombie(void)
{
    std::cout << "<" << name << "> Zombie died..." << std::endl;
}

void    Zombie::announce(void) const
{
    std::cout << "<" << name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
