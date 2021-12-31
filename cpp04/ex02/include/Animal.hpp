/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:18:32 by ybong             #+#    #+#             */
/*   Updated: 2021/12/31 23:09:45 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"
# include <iostream>
# include <iomanip>

class Animal {
protected:
	std::string type;
public:
	virtual ~Animal(void);
	virtual Animal &operator=(const Animal &src);

	const std::string	&getType(void) const;
	virtual Brain		*getBrain(void) const = 0; // 순수 가상함수
};

#endif