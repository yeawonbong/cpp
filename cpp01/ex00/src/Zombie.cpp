/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:24:41 by ybong             #+#    #+#             */
/*   Updated: 2021/12/17 19:21:00 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

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
