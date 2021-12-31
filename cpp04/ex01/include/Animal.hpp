/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:18:32 by ybong             #+#    #+#             */
/*   Updated: 2021/12/31 22:20:40 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"
# include <iostream>
# include <iomanip>

# define NUM 5

class Animal {
protected:
	std::string type;
public:
	Animal(void);
	Animal(const Animal &src);
	virtual ~Animal(void);
	virtual Animal &operator=(const Animal &src);
	virtual void makeSound(void) const;

	const std::string	&getType(void) const;
	virtual Brain		*getBrain(void) const = 0; // 순수 가상함수
};

std::ostream	&operator<<(std::ostream &ostream, const Animal &instance);
#endif