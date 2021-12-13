/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:24:24 by ybong             #+#    #+#             */
/*   Updated: 2021/12/10 17:14:14 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie 
{
private:
	std::string name;
public:
	Zombie();
	Zombie(std::string name); // constructor
	~Zombie(void); // 소멸자 destructor - add debugging message

	void		announce(void) const;
	void		setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif