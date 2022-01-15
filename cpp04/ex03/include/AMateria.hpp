/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:18:32 by ybong             #+#    #+#             */
/*   Updated: 2022/01/16 01:40:41 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <iomanip>

class ICharacter;

class AMateria 
{
	
protected:

	AMateria(void);
	
	std::string	type;
	
public:

	AMateria(std::string const &type);
	virtual ~AMateria(void);

	AMateria	&operator=(const AMateria &other);

	std::string const	&getType(void) const;
	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target) = 0;

};

#endif