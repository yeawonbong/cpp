#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{

private:

	Bureaucrat();
	const std::string	name;
	int	grade; // 1~150

public:

	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	~Bureaucrat();

	Bureaucrat	&operator=(const Bureaucrat &other);

	clss	GradeTooHighException : public std::exception;
	clss	GradeTooLowException : public std::exception;

	void	increment();
	void	decrement();

	std::string	getName();
	int			getGrade();

};

std::ostream	&operator<<(std::ostream &ostream, const Bureaucrat &instance);

#endif