#ifndef INTERN_HPP
# define INTERN_HPP
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Form;
class Intern
{
private:
	static std::string 	strArr[3];
public:
	Intern();
	Intern(const Intern &src);
	~Intern();
	Intern	&operator=(const Intern &other);

	Form	*makeForm(std::string formName, std::string target);
	static bool verbose;
};

#endif