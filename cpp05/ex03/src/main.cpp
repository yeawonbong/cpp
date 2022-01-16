/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:01:57 by ybong             #+#    #+#             */
/*   Updated: 2022/01/17 00:39:16 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/Intern.hpp"

int main(void) {
	Bureaucrat::verbose = false;
	Form::verbose = false;
	Intern::verbose = false;
	
	Intern someRandomIntern;
	Form *tmpForm = NULL;
	{
		if ((tmpForm = someRandomIntern.makeForm("invalid form", "Shr"))) {
			std::cout << *tmpForm << std::endl;
			delete tmpForm;
		}
	}	
	{
		if ((tmpForm = someRandomIntern.makeForm("robotomy request", "Bender"))) {
			std::cout << *tmpForm << std::endl;
			delete tmpForm;
			tmpForm = NULL;
		}
	}
	{
		if ((tmpForm = someRandomIntern.makeForm("presidential pardon", "Pre"))) {
			std::cout << *tmpForm << std::endl;
			delete tmpForm;
			tmpForm = NULL;
		}
	}
	{
		if ((tmpForm = someRandomIntern.makeForm("shrubbery creation", "Shr"))) {
			std::cout << *tmpForm << std::endl;
			Bureaucrat amy("Amy", 1);
			tmpForm->beSigned(amy);
			tmpForm->execute(amy);
			delete tmpForm;
			tmpForm = NULL;
		}
	}
}