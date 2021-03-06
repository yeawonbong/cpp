/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 19:44:34 by ybong             #+#    #+#             */
/*   Updated: 2022/01/16 01:48:58 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
class Cure : public AMateria
{

public:

	Cure(void);
	Cure(const Cure &src);
	~Cure(void);

	Cure				&operator=(const Cure &other);

	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter& target);

};

#endif