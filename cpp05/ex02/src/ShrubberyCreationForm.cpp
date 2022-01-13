#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) 
: Form("ShrubberyCreationForm", 145, 137), target(target)
{
	if (ShrubberyCreationForm::verbose)
		std::cout << "<ShrubberyCreationForm> Standard constructor called" << std::endl; 
}

ShrubberyCreationForm::ShrubberyCreationForm(void)
: Form("ShrubberyCreationForm", 145, 137), target("")
{
	if (ShrubberyCreationForm::verbose)
		std::cout << "<ShrubberyCreationForm> Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
: Form("ShrubberyCreationForm", 145, 137), target(src.getTarget())
{
	if (ShrubberyCreationForm::verbose)
		std::cout << "<ShrubberyCreationForm> Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	if (ShrubberyCreationForm::verbose)
		std::cout << "<ShrubberyCreationForm> Destructor called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &instance)
{
	if (ShrubberyCreationForm::verbose)
		std::cout << "<ShrubberyCreationForm> Assignment operator called (but nothing is copied)" << std::endl;
	return *this;
}

const std::string &ShrubberyCreationForm::getTarget(void) const
{
	return this->target;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	this->checkExecutable(executor);
	std::ofstream fileStream;
	std::string	filename = this->getTarget() + "_shrubbery";
	fileStream.open(filename);
	fileStream << 
"                                              .\
                                   .         ;\
      .              .              ;%     ;;\
        ,           ,                :;%  %;\
         :         ;                   :;%;'     .,\
,.        %;     %;            ;        %;'    ,;\
  ;       ;%;  %%;        ,     %;    ;%;    ,%'\
   %;       %;%;      ,  ;       %;  ;%;   ,%;'\
    ;%;      %;        ;%;        % ;%;  ,%;'\
     `%;.     ;%;     %;'         `;%%;.%;'\
      `:;%.    ;%%. %@;        %; ;@%;%'\
         `:%;.  :;bd%;          %;@%;'\
           `@%:.  :;%.         ;@@%;'\
             `@%.  `;@%.      ;@@%;\
               `@%%. `@%%    ;@@%;\
                 ;@%. :@%%  %@@%;\
                   %@bd%%%bd%%:;\
                     #@%%%%%:;;\
                     %@@%%%::;\
                     %@@@%(o);  . '\
                     %@@@o%;:(.,'\
                 `.. %@@@o%::;\
                    `)@@@o%::;\
                     %@@(o)::;\
                    .%@@@@%::;\
                    ;%@@@@%::;.\
                   ;%@@@@%%:;;;.\
               ...;%@@@@@%%:;;;;,.." << std::endl;
	fileStream.close();
	std::cout << "<ShrubberyCreationForm> Tree is created in " << filename << std::endl;
}