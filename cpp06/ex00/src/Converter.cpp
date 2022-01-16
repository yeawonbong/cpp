#include "../include/Converter.hpp"

bool Converter::verbose = true;

Converter::Converter(void) {
	if (Converter::verbose)
		std::cout << "<Converter> Default Constructor called" << std::endl;
}

Converter::Converter(std::string str) : str(str) {
	if (Converter::verbose)
		std::cout << "<Converter> Standard Constructor called" << std::endl;
}

Converter::~Converter(void) {
	if (Converter::verbose)
		std::cout << "<Converter> Destructor called" << std::endl;
}

Converter	&Converter::operator=(const Converter &src) {
	if (Converter::verbose)
		std::cout << "<Converter> Assignment Operator called" << std::endl;
	str = src.str;
	cVal = src.cVal;
	iVal = src.iVal;
	fVal = src.fVal;
	dVal = src.dVal;
	return *this;
}

void	Converter::convert() throw(InvalidInputException) {
	if (('0' <= str[0] && str[0] <= '9') || str[0] == '-' || str[0] == '+')
		parseNum();
	else if (0 <= str[0] && str[0] <= 127 && !str[1]) {
		cVal = str[0];
		iVal = (int)str[0];
		fVal = (float)iVal;
		dVal = (double)fVal;
	}
	else
		throw InvalidInputException();
}

void	Converter::parseNum() throw(InvalidInputException) {
	int	dot = 0;
	for (int i = 0; str[i] != 0; i++) {
		if (!std::isdigit(str[i])) {
			if (str[i] == '.') {
				if (1 < ++dot)
					throw InvalidInputException();
			}				
			else if (str[i] == 'f' && !str[i+1] && dot == 1) { //float
				str.resize(str.length() - 1);
			}
			else if (!(i == 0 && (str[i] == '+' || str[i] == '-')))
				throw InvalidInputException();
		}
	}
	std::stringstream(str) >> dVal;
	iVal = (int)dVal;
	cVal = (char)iVal;
	fVal = (float)dVal;
}

void	Converter::printVals() const {
	std::cout << "char: " << getCVal() << std::endl;
	std::cout << "int: " << getIVal() << std::endl;
	std::cout << "float: " << getFVal() << std::endl;
	std::cout << "double: " << getDVal() << std::endl;
}

std::string	Converter::getCVal() const {
	if (cVal < 32 || cVal == 127)
		return ("Non displayable");
	return std::string(&cVal);
}

std::string Converter::getIVal() const {
	std::stringstream res;
	res << iVal;
	return res.str();
}

std::string Converter::getFVal() const {
	std::stringstream res;
	res << fVal;
	std::string restr = res.str();
	for (int i=0; restr[i]; i++) {
		if (restr[i] == '.')
			return(restr + "f");
	}
	return restr + ".0f";
}

std::string Converter::getDVal() const {
	std::stringstream res;
	res << fVal;
	std::string restr = res.str();
	for (int i=0; restr[i]; i++) {
		if (restr[i] == '.')
			return(restr);
	}
	return restr + ".0";	
}