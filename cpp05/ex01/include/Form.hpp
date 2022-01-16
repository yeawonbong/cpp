/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:03:39 by ybong             #+#    #+#             */
/*   Updated: 2022/01/16 16:03:39 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form 
{
private:
	Form();
	const std::string name;
	bool		isSigned;
	const int	gradeToSign;
	const int	gradeToExecute;

	static const int	lowestGrade = 150;
	static const int	highestGrade = 1;
	void	checkGrade(int grade) const;

public:
	Form(const std::string name, const int gradeToSign, const int gradeToExecute);
	Form(const Form &src);
	~Form();
	Form	&operator=(const Form &other);

	bool	beSigned(Bureaucrat &bureaucrat);

	const std::string	getName() const;
	bool				getIsSingned() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;

	static bool verbose;

	class	GradeTooHighException : public std::exception 
	{
	public:
		const char* what() const throw() {
			return "Grade Too High";
		}
	};
	class	GradeTooLowException : public std::exception {
		const char* what() const throw() {
			return "Grade Too Low";
		}
	};
};

std::ostream	&operator<<(std::ostream &ostream, Form &instance);

#endif