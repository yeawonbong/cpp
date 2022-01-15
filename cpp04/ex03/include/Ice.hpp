/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 19:44:34 by ybong             #+#    #+#             */
/*   Updated: 2022/01/16 01:47:09 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
class Ice : public AMateria
{

public:

	Ice(void);
	Ice(const Ice &src);
	virtual ~Ice(void);
	
	Ice					&operator=(const Ice &other);

	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter& target);

};

#endif