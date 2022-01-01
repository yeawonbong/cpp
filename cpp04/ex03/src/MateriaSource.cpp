/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 00:50:27 by ybong             #+#    #+#             */
/*   Updated: 2022/01/02 00:50:27 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource(void) : sourceNum(0) {
	std::cout << std::setw(17) << std::left << "<MateriaSource>" << "Default constructor called" << std::endl;	
	for(int i=0; i<4; i++) {
		this->source[i] = 0;
	}
}
MateriaSource::~MateriaSource(void) {
	for (int i=0; i < this->sourceNum; i++) {
		delete this->source[i];
	}
	std::cout << std::setw(17) << std::left << "<MateriaSource>" << "Destructor called" << std::endl;		
}

void		MateriaSource::learnMateria(AMateria* m) {
	if (this->sourceNum < 4) {
		this->source[sourceNum++] = m;
		std::cout << std::setw(17) << std::left << "<MateriaSource>" << "Learned " << m->getType() << std::endl;
	}
	else
		std::cout << std::setw(17) << std::left << "<MateriaSource>" << "Learn Failed: Source memory is full" << std::endl;

}
AMateria	*MateriaSource::createMateria(std::string const &type) {
	for (int i=0; i < this->sourceNum; i++) {
		if (this->source[i]->getType() == type) {
			std::cout << std::setw(17) << std::left << "<MateriaSource>" << "Created new " << type << std::endl;
			return this->source[i]->clone();
		}
	}
	std::cout << std::setw(17) << std::left << "<MateriaSource>" << "Create Failed: no such type in source" << std::endl;
	return 0;
}
