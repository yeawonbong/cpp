#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form 
{
protected:
	Form();
	const std::string name;
	bool		isSigned;
	const int	gradeToSign;
	const int	gradeToExecute;
	const std::string	target;

	static const int	lowestGrade = 150;
	static const int	highestGrade = 1;

public:
	Form(const std::string name, const int gradeToSign, const int gradeToExecute);
	Form(const Form &src);
	virtual ~Form();
	Form	&operator=(const Form &other);

	void			checkGrade(int grade) const;
	bool			beSigned(Bureaucrat &bureaucrat);
	void			checkExecutable(const Bureaucrat &executor) const;
	virtual void	execute(const Bureaucrat &executor) const = 0;

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
	class	NotExecutableExeption : public std::exception {
		const char* what() const throw() {
			return "Not Executable. Because the level is not high enough, or the Form is not signed";
		}
	};
};

std::ostream	&operator<<(std::ostream &ostream, Form &instance);

#endif