/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:39:38 by ybong             #+#    #+#             */
/*   Updated: 2022/01/16 01:50:10 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Brain.hpp"

# include "Animal.hpp"

class Dog : public Animal {

private:
	Brain	*brain;

public:
	Dog(void);
	Dog(const Dog &src);
	~Dog(void);
	
	virtual Dog		&operator=(const Dog &src);
	virtual Animal	&operator=(const Animal &src);

	void 	makeSound(void) const;
	Brain	*getBrain(void) const;
};

#endif