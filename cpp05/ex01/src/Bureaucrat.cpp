#include "../include/Bureaucrat.hpp"

bool	Bureaucrat::verbose = true;

Bureaucrat::Bureaucrat() : name(""), grade(Bureaucrat::lowestGrade) {
	if (Bureaucrat::verbose == true)
		std::cout << "<Bureaucrat> Default Constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade) {
	checkGrade();
	if (Bureaucrat::verbose == true)
		std::cout << "<Bureaucrat> Standard Constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	if (Bureaucrat::verbose == true)
		std::cout << "<Bureaucrat> Copy Constructor called" << std::endl;
	*this = src;
}
Bureaucrat::~Bureaucrat() {
	if (Bureaucrat::verbose == true)
		std::cout << "<Bureaucrat> Destructor called" << std::endl;
}
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other) {
	if (Bureaucrat::verbose == true)
		std::cout << "<Bureaucrat> Assignment operator called" << std::endl;	
	this->grade = other.grade;
	return *this;
}

void	Bureaucrat::checkGrade(void) const {
	if (grade < highestGrade)
		throw GradeTooHighException();
	else if (grade > lowestGrade)
		throw GradeTooLowException();
}

void	Bureaucrat::increment() {
	if (Bureaucrat::verbose == true)
		std::cout << "<Bureaucrat> Increment function called" << std::endl;
	this->grade--;
	checkGrade();
}
void	Bureaucrat::decrement() {
	if (Bureaucrat::verbose == true)
		std::cout << "<Bureaucrat> Decrement function called" << std::endl;
	this->grade++;
	checkGrade();
}

const std::string	&Bureaucrat::getName() const {
	return this->name;
}
int			Bureaucrat::getGrade() const {
	return this->grade;
}

std::ostream	&operator<<(std::ostream &ostream, const Bureaucrat &instance) {
	ostream << GRAY << instance.getName() << ", bureaucrat grade, " << instance.getGrade() << std::endl << RESET;
	return ostream;
}
