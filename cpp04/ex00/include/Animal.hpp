/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:18:32 by ybong             #+#    #+#             */
/*   Updated: 2021/12/31 18:25:19 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <iomanip>

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

std::ostream	&operator<<(std::ostream &ostream, const Animal &instance);
#endif