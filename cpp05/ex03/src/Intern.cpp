#include "../include/Intern.hpp"

bool Intern::verbose = true;

Intern::Intern() {
	if (Intern::verbose)
		std::cout << "<Intern> Default Constructor called" << std::endl;	
}

Intern::Intern(const Intern &src) {
	*this = src;
	if (Intern::verbose)
		std::cout << "<Intern> Copy Constructor called" << std::endl;
}

Intern::~Intern(){
	if (Intern::verbose)
		std::cout << "<Intern> Destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &other) {
	(void)other;
	if (Intern::verbose)
		std::cout << "<Intern> Assignment operator called" << std::endl;
	return *this;
}

std::string Intern::strArr[3] = {
	"shrubbery creation",
	"robotomy request",
	"presidential pardon"
};

Form	*Intern::makeForm(std::string formName, std::string target) {
	Form *res;
	Form *formArr[3] = {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target)
	};
	for(int i=0; i < 3; i++) {
		if (this->strArr[i] == formName)
			res = formArr[i];
		else
			delete formArr[i];
	}
	std::cout << BLUE << "Intern creates " << res->getName() << std::endl << RESET;
	return res;
}