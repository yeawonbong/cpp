/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:39:38 by ybong             #+#    #+#             */
/*   Updated: 2021/12/31 21:58:29 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
protected:
public:
	Dog(void);
	Dog(const Dog &src);
	~Dog(void);
	Dog &operator=(const Dog &src);

	virtual void makeSound(void) const;
};

#endif