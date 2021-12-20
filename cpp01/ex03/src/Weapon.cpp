/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:24:06 by ybong             #+#    #+#             */
/*   Updated: 2021/12/20 16:58:59 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(){}
Weapon::Weapon(std::string type) : type(type)
{
}

const	std::string&	Weapon::getType() const
{
	return type;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}