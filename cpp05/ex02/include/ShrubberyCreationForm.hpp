#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	const std::string	target;
	ShrubberyCreationForm(void);

public:
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &instance);

	virtual void		execute(const Bureaucrat &executor) const;
	const std::string	&getTarget(void) const;

	static bool	verbose;
};

#endif