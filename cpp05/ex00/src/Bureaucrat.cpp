#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(150) {}
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {}
Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	
}
Bureaucrat::~Bureaucrat() {

}
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other) {
	this->grade = other.grade;
}
