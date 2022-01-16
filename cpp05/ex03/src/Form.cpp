/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:02:03 by ybong             #+#    #+#             */
/*   Updated: 2022/01/16 15:50:20 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Form.hpp"

bool Form::verbose = true;

Form::Form() : name(""), isSigned(false), gradeToSign(Form::lowestGrade), gradeToExecute(Form::lowestGrade), target("") {
	if (Form::verbose)
		std::cout << "<Form> Default Constructor called" << std::endl;	
}
Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute)
: name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute), target("") {
	checkGrade(gradeToSign);
	checkGrade(gradeToExecute);	
	if (Form::verbose)
		std::cout << "<Form> Standard Constructor called" << std::endl;
}
Form::Form(const Form &src) : name(""), gradeToSign(Form::lowestGrade), gradeToExecute(Form::lowestGrade), target("") {
	this->isSigned = src.getIsSingned();
	if (Form::verbose)
		std::cout << "<Form> Copy Constructor called" << std::endl;
}
Form::~Form(){
	if (Form::verbose)
		std::cout << "<Form> Destructor called" << std::endl;
}
Form &Form::operator=(const Form &other) {
	this->isSigned = other.isSigned;
	if (Form::verbose)
		std::cout << "<Form> Assignment operator called" << std::endl;
	return *this;
}
void	Form::checkGrade(int grade) const throw(GradeTooHighException, GradeTooLowException){
	if (grade < highestGrade)
		throw GradeTooHighException();
	else if (grade > lowestGrade)
		throw GradeTooLowException();
}	

bool	Form::beSigned(Bureaucrat &bureaucrat) {
	if (!this->getIsSingned() && this->getGradeToSign() > bureaucrat.getGrade()) {
		std::cout << BLUE << bureaucrat.getName() + " signs " + this->getName() << std::endl << RESET;
		this->isSigned = true;
		return true;
	}
	if (this->getIsSingned()) {
		std::cout << RED << bureaucrat.getName() + " cannot sign " + this->getName() + " because it is already signed." << std::endl << RESET;
	}
	else if (this->getGradeToSign() < bureaucrat.getGrade()) {
		std::cout << RED << bureaucrat.getName() + " cannot sign " + this->getName() + " because the grade is not high enough." << std::endl << RESET;
	}
	return false;
}

void	Form::checkExecutable(const Bureaucrat &executor) const throw(NotExecutableExeption)
{
	if ((this->gradeToSign < executor.getGrade()) || this->getIsSingned() == false)
		throw NotExecutableExeption();
}

const std::string	&Form::getTarget() const {
	return this->target;
}
const std::string	Form::getName() const {
	return this->name;
}
bool				Form::getIsSingned() const {
	return this->isSigned;
}
int			Form::getGradeToSign() const {
	return this->gradeToSign;
}
int			Form::getGradeToExecute() const {
	return this->gradeToExecute;
}
std::ostream	&operator<<(std::ostream &ostream, Form &instance) {
	ostream << GRAY;
	ostream << "> Form info <" << std::endl;
	ostream << "> name: " + instance.getName() << std::endl;
	std::string out = instance.getIsSingned() == true ? "signed" : "not signed";
	ostream << "> isSigned: " << out << std::endl;
	ostream << "> gradeToSign: " << instance.getGradeToSign() << std::endl;
	ostream << "> gradeToExecute: " << instance.getGradeToExecute() << std::endl << RESET;
	return ostream;
}