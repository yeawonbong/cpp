/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:04:13 by ybong             #+#    #+#             */
/*   Updated: 2022/01/16 16:04:14 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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