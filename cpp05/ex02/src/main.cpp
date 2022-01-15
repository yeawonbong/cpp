/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:01:57 by ybong             #+#    #+#             */
/*   Updated: 2022/01/14 16:56:05 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

int main(void) {
	Bureaucrat::verbose = false;
	Form::verbose = true;

	Bureaucrat amy("Amy", 1);
	Bureaucrat billy("Billy", 70);
	Bureaucrat carrol("Carrol", 150);
	Form *form = NULL;

	std::cout << std::endl;
	std::cout << "<Testing ShrubberyCreationForm>" << std::endl;
	try
	{
		form = new ShrubberyCreationForm("Form1");
		std::cout << *form;
		form->beSigned(carrol);
		form->beSigned(amy);
		amy.executeForm(*form);
		billy.executeForm(*form);
		carrol.executeForm(*form);
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Exception: " << e.what() << std::endl << RESET;
	}
	delete form;
	form = NULL;
	
	std::cout << std::endl;
	std::cout << "<Testing RobotomyRequestForm>" << std::endl;
	try
	{
		form = new RobotomyRequestForm("Form2");
		std::cout << *form;
		form->beSigned(carrol);
		form->beSigned(amy);
		amy.executeForm(*form);
		amy.executeForm(*form);
		amy.executeForm(*form);
		amy.executeForm(*form);
		amy.executeForm(*form);
		billy.executeForm(*form);
		billy.executeForm(*form);
		billy.executeForm(*form);
		billy.executeForm(*form);
		billy.executeForm(*form);
		billy.executeForm(*form);
		carrol.executeForm(*form);
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Exception: " << e.what() << std::endl << RESET;
	}
	delete form;
	form = NULL;
	
	std::cout << std::endl;
	std::cout << "<Testing PresidentialPardonForm>" << std::endl;
	try
	{
		form = new PresidentialPardonForm("Form3");
		std::cout << *form;
		// amy.executeForm(*form);
		form->beSigned(carrol);
		form->beSigned(amy);
		amy.executeForm(*form);
		billy.executeForm(*form);
		carrol.executeForm(*form);
	}
	catch (std::exception &e)
	{
		std::cout << RED << "Exception: " << e.what() << std::endl << RESET;
	}
	delete form;
	form = NULL;
}