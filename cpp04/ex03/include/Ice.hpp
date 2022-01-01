/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 19:44:34 by ybong             #+#    #+#             */
/*   Updated: 2022/01/01 21:41:21 by ybong            ###   ########.fr       */
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
	~Ice(void);
	
	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter& target);

};

#endif