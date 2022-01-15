/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:02:00 by ybong             #+#    #+#             */
/*   Updated: 2022/01/14 18:49:46 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
: Form("PresidentialPardonForm", 25, 5)
{
	if (PresidentialPardonForm::verbose)
		std::cout << "<PresidentialPardonForm> Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) 
: Form("PresidentialPardonForm", 25, 5)
{
	this->target = target;
	if (PresidentialPardonForm::verbose)
		std::cout << "<PresidentialPardonForm> Standard constructor called" << std::endl; 
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
: Form("PresidentialPardonForm", 25, 5)
{
	this->target = src.getTarget();
	if (PresidentialPardonForm::verbose)
		std::cout << "<PresidentialPardonForm> Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	if (PresidentialPardonForm::verbose)
		std::cout << "<PresidentialPardonForm> Destructor called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &instance)
{
	this->target = instance.getTarget();
	if (PresidentialPardonForm::verbose)
		std::cout << "<PresidentialPardonForm> Assignment operator called (but nothing is copied)" << std::endl;
	return *this;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	this->checkExecutable(executor);
	std::cout << LBLUE << "<PresidentialPardonForm> " << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl << RESET;
}