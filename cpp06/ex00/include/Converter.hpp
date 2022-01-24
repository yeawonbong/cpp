/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:20:19 by ybong             #+#    #+#             */
/*   Updated: 2022/01/24 18:52:34 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <stdexcept>
# include <sstream>
# include <limits>
# include <string>
# include <iomanip>

# define BLUE "\033[1;34m"
# define LBLUE "\033[34m"
# define GRAY "\033[1;30m"
# define RESET "\033[1;0m"
# define RED "\033[1;31m"

enum types {
	INIT, INF, MINF, NAN
};

class Converter
{

public:

	Converter(std::string str);
	Converter(const Converter &src);
	~Converter(void);
	Converter	&operator=(const Converter &src);

	class	InvalidInputException : public std::exception
	{
	public:
		const char* what() const throw() {
			return "Invalid Input!\nInput must belong to one of these [ char, int, float, double ]";
		}
	};

private:
	
	Converter(void);

	std::string str;
	types		type;
	char		cVal;
	double		dVal;

	bool	parseNanInf();
	void	parseNum() throw(InvalidInputException);
	std::string getCVal() const;
	std::string getIVal() const;
	std::string getFVal() const;
	std::string getDVal() const;

public:

	static bool	verbose;

	void	convert() throw(InvalidInputException);
	void	printVals() const;

};

#endif