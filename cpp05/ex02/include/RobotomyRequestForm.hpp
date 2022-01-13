#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	const std::string	target;
	RobotomyRequestForm(void);

public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	~RobotomyRequestForm(void);

	RobotomyRequestForm &operator=(const RobotomyRequestForm &instance);

	virtual void		execute(const Bureaucrat &executor) const;
	const std::string	&getTarget(void) const;

	static bool	verbose;
};

#endif