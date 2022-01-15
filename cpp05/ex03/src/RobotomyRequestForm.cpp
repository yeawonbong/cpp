/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:02:44 by ybong             #+#    #+#             */
/*   Updated: 2022/01/14 18:13:52 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
: Form("RobotomyRequestForm", 72, 45)
{
	if (RobotomyRequestForm::verbose)
		std::cout << "<RobotomyRequestForm> Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) 
: Form("RobotomyRequestForm", 72, 45)
{
	this->target = target;
	if (RobotomyRequestForm::verbose)
		std::cout << "<RobotomyRequestForm> Standard constructor called" << std::endl; 
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
: Form("RobotomyRequestForm", 72, 45)
{
	this->target = src.getTarget();
	if (RobotomyRequestForm::verbose)
		std::cout << "<RobotomyRequestForm> Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	if (RobotomyRequestForm::verbose)
		std::cout << "<RobotomyRequestForm> Destructor called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &instance)
{
	this->target = instance.getTarget();
	if (RobotomyRequestForm::verbose)
		std::cout << "<RobotomyRequestForm> Assignment operator called (but nothing is copied)" << std::endl;
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	this->checkExecutable(executor);
	std::cout << LBLUE << "<RobotomyRequestForm> * drilling noises *" << std::endl << RESET;
	if (rand() % 2)
    std::cout << LBLUE << "<RobotomyRequestForm> " << this->getTarget() << " has been robotomized successfully" << std::endl << RESET;
  else
    std::cout << LBLUE << "<RobotomyRequestForm> " << this->getTarget() << " has failed to be robotomized" << std::endl << RESET;
}