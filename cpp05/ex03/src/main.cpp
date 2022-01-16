/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:01:57 by ybong             #+#    #+#             */
/*   Updated: 2022/01/16 15:55:27 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/Intern.hpp"

int main(void) {
	Bureaucrat::verbose = true;
	Form::verbose = true;
	Intern::verbose = true;
	
	Intern someRandomIntern;
	Form *tmpForm = NULL;
	{
		tmpForm = someRandomIntern.makeForm("invalid form", "Shr");
		if (tmpForm) {
			std::cout << *tmpForm << std::endl;
			delete tmpForm;
		}
	}	
	{
		tmpForm = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *tmpForm << std::endl;
		delete tmpForm;
		tmpForm = NULL;
	}
	{
		tmpForm = someRandomIntern.makeForm("presidential pardon", "Pre");
		std::cout << *tmpForm << std::endl;
		delete tmpForm;
		tmpForm = NULL;
	}
	{
		tmpForm = someRandomIntern.makeForm("shrubbery creation", "Shr");
		std::cout << *tmpForm << std::endl;

		Bureaucrat amy("Amy", 1);
		tmpForm->beSigned(amy);
		tmpForm->execute(amy);
		delete tmpForm;
		tmpForm = NULL;
	}
}