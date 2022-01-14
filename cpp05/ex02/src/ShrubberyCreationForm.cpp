/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:02:08 by ybong             #+#    #+#             */
/*   Updated: 2022/01/14 16:02:09 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) 
: Form("ShrubberyCreationForm", 145, 137)
{
  this->target = target;
	if (ShrubberyCreationForm::verbose)
		std::cout << "<ShrubberyCreationForm> Standard constructor called" << std::endl; 
}

ShrubberyCreationForm::ShrubberyCreationForm(void)
: Form("ShrubberyCreationForm", 145, 137)
{
	this->target = "";
	if (ShrubberyCreationForm::verbose)
		std::cout << "<ShrubberyCreationForm> Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
: Form("ShrubberyCreationForm", 145, 137)
{
	this->target = src.getTarget();
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
	this->target = instance.getTarget();
	if (ShrubberyCreationForm::verbose)
		std::cout << "<ShrubberyCreationForm> Assignment operator called (but nothing is copied)" << std::endl;
	return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	this->checkExecutable(executor);
	std::ofstream fileStream;
	std::string	filename = this->getTarget() + "_shrubbery";
	fileStream.open(filename);
	fileStream << std::endl <<
"                                              .\n\
                                   .         ;\n\
      .              .              ;%     ;;\n\
        ,           ,                :;%  %;\n\
         :         ;                   :;%;'     .,\n\
,.        %;     %;            ;        %;'    ,;\n\
  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n\
    ;%;      %;        ;%;        % ;%;  ,%;'\n\
     `%;.     ;%;     %;'         `;%%;.%;'\n\
      `:;%.    ;%%. %@;        %; ;@%;%'\n\
         `:%;.  :;bd%;          %;@%;'\n\
           `@%:.  :;%.         ;@@%;'\n\
             `@%.  `;@%.      ;@@%;\n\
               `@%%. `@%%    ;@@%;\n\
                 ;@%. :@%%  %@@%;\n\
                   %@bd%%%bd%%:;\n\
                     #@%%%%%:;;\n\
                     %@@%%%::;\n\
                     %@@@%(o);  . '\n\
                     %@@@o%;:(.,'\n\
                 `.. %@@@o%::;\n\
                    `)@@@o%::;\n\
                     %@@(o)::;\n\
                    .%@@@@%::;\n\
                    ;%@@@@%::;.\n\
                   ;%@@@@%%:;;;.\n\
               ...;%@@@@@%%:;;;;,.." << std::endl;
	fileStream.close();
	std::cout << LBLUE << "<ShrubberyCreationForm> Tree is created in " << filename << std::endl << RESET;
}