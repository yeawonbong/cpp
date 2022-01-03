/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:18:32 by ybong             #+#    #+#             */
/*   Updated: 2022/01/03 17:38:49 by ybong            ###   ########.fr       */
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
	virtual ~Animal(void);
	Animal &operator=(const Animal &src);

	virtual void makeSound(void) const;

	const std::string	&getType(void) const;
};

std::ostream	&operator<<(std::ostream &ostream, const Animal &instance);
#endif