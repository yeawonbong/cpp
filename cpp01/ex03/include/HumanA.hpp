/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:23:51 by ybong             #+#    #+#             */
/*   Updated: 2021/12/17 19:23:52 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
# include <iostream>


class HumanA
{
private:
	Weapon		&weaponRef;
	std::string	name;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack();
};

#endif