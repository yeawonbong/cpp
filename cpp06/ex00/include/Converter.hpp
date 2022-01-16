#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>

class Converter
{

public:

	Converter(std::string literalVal);
	Converter(const Converter &src);
	// ~Converter(void);
	// Converter	&operator=(const Converter &src);

private:
	
	Converter(void);

	std::string literalVal;
	char		cVal;
	int			iVal;
	float		fVal;
	double		dVal;

public:
	
	std::string getCVal() const;
	std::string getIVal() const;
	std::string getFVal() const;
	std::string getDVal() const;
};

#endif