/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 16:03:31 by ybong             #+#    #+#             */
/*   Updated: 2022/01/16 16:03:31 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

# define BLUE "\033[1;34m"
# define GRAY "\033[1;30m"
# define RESET "\033[1;0m"

class Bureaucrat
{
private:

	const std::string	name;
	int	grade; // 1~150

	static const int	lowestGrade = 150;
	static const int	highestGrade = 1;

	Bureaucrat();
	void	checkGrade(void) const;


public:

	static bool verbose;
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	~Bureaucrat();
	Bureaucrat	&operator=(const Bureaucrat &other);
	
	void		increment();
	void		decrement();

	const std::string	&getName() const;
	int					getGrade() const;

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

std::ostream	&operator<<(std::ostream &ostream, const Bureaucrat &instance);

#endif