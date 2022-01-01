/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:18:32 by ybong             #+#    #+#             */
/*   Updated: 2022/01/02 00:43:24 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <iomanip>

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class ICharacter;

class MateriaSource : public IMateriaSource {

protected:
	AMateria	*source[4];
	int			sourceNum;
	
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &src);
	~MateriaSource(void);

	virtual	void		learnMateria(AMateria* m);
	virtual AMateria	*createMateria(std::string const &type);
};

#endif	