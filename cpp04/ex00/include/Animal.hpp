/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:18:32 by ybong             #+#    #+#             */
/*   Updated: 2021/12/29 22:13:39 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal(void);
	Animal(const Animal &src);
	~Animal(void);
	Animal &operator=(const Animal &src);

	virtual void makeSound(void) const;

	const std::string	&getType(void) const;
};

#endif