#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(150) {}
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
	if (grade < 0)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}
Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	*this = src;
}
Bureaucrat::~Bureaucrat() {}
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other) {
	// this->name = other.name;
	this->grade = other.grade;
}
const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade Too High";
}
const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade Too Low";
}
void	Bureaucrat::increment() {
	this->grade++;
	if (grade < 0)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}