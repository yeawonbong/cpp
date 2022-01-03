/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:18:32 by ybong             #+#    #+#             */
/*   Updated: 2022/01/03 18:49:40 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include <iomanip>

# include "AMateria.hpp"

class IMateriaSource {

public:
	virtual ~IMateriaSource(void) {}
	virtual	void		learnMateria(AMateria* m) = 0;
	virtual AMateria	*createMateria(std::string const &type) = 0;
};

#endif