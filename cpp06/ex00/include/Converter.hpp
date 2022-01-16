#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <stdexcept>
# include <sstream>

# define BLUE "\033[1;34m"
# define LBLUE "\033[34m"
# define GRAY "\033[1;30m"
# define RESET "\033[1;0m"
# define RED "\033[1;31m"

enum types {
	CHAR, INT, FLOAT, DOUBLE
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
			return "Invalid Input!";
		}
	};

private:
	
	Converter(void);

	std::string str;
	char		cVal;
	int			iVal;
	float		fVal;
	double		dVal;

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

/* TO DO (22.01.17.MON)
- inf, nan 처리해주기
- 정수 범위 설정 해주기 (overflow)
*/