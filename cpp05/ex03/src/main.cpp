/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:01:57 by ybong             #+#    #+#             */
/*   Updated: 2022/01/14 19:21:15 by ybong            ###   ########.fr       */
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
	Form::verbose = true;
	
	Intern someRandomIntern;
	Form *tmpForm;
	tmpForm = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *tmpForm << std::endl;
	delete tmpForm;
}