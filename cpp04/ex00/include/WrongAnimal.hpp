/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 18:25:13 by ybong             #+#    #+#             */
/*   Updated: 2022/01/03 17:42:08 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <iomanip>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &src);
	~WrongAnimal(void); // not virtual (wrong)

	WrongAnimal	&operator=(const WrongAnimal &other);

	void	makeSound(void) const; // not virtual (wrong)
	
	const std::string	&getType(void) const;
};

std::ostream	&operator<<(std::ostream &ostream, const WrongAnimal &instance);

#endif