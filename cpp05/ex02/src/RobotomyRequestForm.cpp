#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) 
: Form("RobotomyRequestForm", 72, 45), target(target)
{
	if (RobotomyRequestForm::verbose)
		std::cout << "<RobotomyRequestForm> Standard constructor called" << std::endl; 
}

RobotomyRequestForm::RobotomyRequestForm(void)
: Form("RobotomyRequestForm", 72, 45), target("")
{
	if (RobotomyRequestForm::verbose)
		std::cout << "<RobotomyRequestForm> Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
: Form("RobotomyRequestForm", 72, 45), target(src.getTarget())
{
	if (RobotomyRequestForm::verbose)
		std::cout << "<RobotomyRequestForm> Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	if (RobotomyRequestForm::verbose)
		std::cout << "<RobotomyRequestForm> Destructor called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &instance)
{
	if (RobotomyRequestForm::verbose)
		std::cout << "<RobotomyRequestForm> Assignment operator called (but nothing is copied)" << std::endl;
	return *this;
}

const std::string &RobotomyRequestForm::getTarget(void) const
{
	return this->target;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	this->checkExecutable(executor);
	std::cout << "<RobotomyRequestForm> * drilling noises *" << std::endl;
	if (rand() % 2)
    std::cout << "<RobotomyRequestForm> " << this->getTarget() << " has been robotomized successfully" << std::endl;
  else
    std::cout << "<RobotomyRequestForm> " << this->getTarget() << " has failed to be robotomized" << std::endl;
}