/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:18:32 by ybong             #+#    #+#             */
/*   Updated: 2022/01/01 13:16:40 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "Brain.hpp"
# include <iostream>
# include <iomanip>

class ICharacter;

class AMateria {
	
protected:
	std::string	type;
public:
	AMateria(std::string const &type);
	virtual ~AMateria(void);
	virtual AMateria &operator=(const AMateria &src);

	std::string const	&getType(void) const;
	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target) = 0;
};

#endif