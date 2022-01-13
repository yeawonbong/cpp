#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) 
: Form("PresidentialPardonForm", 25, 5), target(target)
{
	if (PresidentialPardonForm::verbose)
		std::cout << "<PresidentialPardonForm> Standard constructor called" << std::endl; 
}

PresidentialPardonForm::PresidentialPardonForm(void)
: Form("PresidentialPardonForm", 25, 5), target("")
{
	if (PresidentialPardonForm::verbose)
		std::cout << "<PresidentialPardonForm> Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
: Form("PresidentialPardonForm", 25, 5), target(src.getTarget())
{
	if (PresidentialPardonForm::verbose)
		std::cout << "<PresidentialPardonForm> Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	if (PresidentialPardonForm::verbose)
		std::cout << "<PresidentialPardonForm> Destructor called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &instance)
{
	if (PresidentialPardonForm::verbose)
		std::cout << "<PresidentialPardonForm> Assignment operator called (but nothing is copied)" << std::endl;
	return *this;
}

const std::string &PresidentialPardonForm::getTarget(void) const
{
	return this->target;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	this->checkExecutable(executor);
	std::cout << "<PresidentialPardonForm> " << this->getTarget() << "has been pardoned by Zafod Beeblebrox" << std::endl;
}