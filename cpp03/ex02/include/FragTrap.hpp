/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:55:41 by ybong             #+#    #+#             */
/*   Updated: 2021/12/28 15:57:37 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	FragTrap(void);
public:
	FragTrap(const std::string name);
	FragTrap(const FragTrap &src);
	~FragTrap(void);
	void highFivesGuys(void);
};

#endif