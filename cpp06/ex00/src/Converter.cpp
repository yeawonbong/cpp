/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybong <ybong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:20:24 by ybong             #+#    #+#             */
/*   Updated: 2022/01/17 18:25:34 by ybong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Converter.hpp"

bool Converter::verbose = true;

Converter::Converter(void) : type(INIT) {
	if (Converter::verbose)
		std::cout << "<Converter> Default Constructor called" << std::endl;
}

Converter::Converter(std::string str) : str(str), type(INIT) {
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
	type = src.type;
	cVal = src.cVal;
	dVal = src.dVal;
	return *this;
}

void	Converter::convert() throw(InvalidInputException) {
	if (parseNanInf() == true)
		return;
	else if (('0' <= str[0] && str[0] <= '9') \
					|| (str[0] == '-' && str[1])\
					|| (str[0] == '+' && str[1]))
		parseNum();
	else if (0 <= str[0] && str[0] <= 127 && !str[1]) {
		cVal = str[0];
		dVal = static_cast<double>(cVal);
	}
	else
		throw InvalidInputException();
}

bool	Converter::parseNanInf() {
	if (str == "inf" || str == "+inf" || str == "inff" || str == "+inff") {
		type = INF;
	}
	else if (str == "-inf" || str == "-inff") {
		type = MINF;
	}
	else if (str == "nan" || str == "nanf") {
		type = NAN;
	}
	else
		return false;
	return true;
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
	cVal = static_cast<char>(dVal);
}

void	Converter::printVals() const {
	std::cout << BLUE;
	std::cout << "char: " << getCVal() << std::endl;
	std::cout << "int: " << getIVal() << std::endl;
	std::cout << "float: " << getFVal() << std::endl;
	std::cout << "double: " << getDVal() << std::endl << RESET;
}

std::string	Converter::getCVal() const {
	if (type != INIT || dVal < 0 || 127 < dVal)
		return ("impossible");
	else if (dVal < 32 || dVal == 127)
		return ("Non displayable");
	return "'" + static_cast<std::string>(&cVal) + "'";
}

std::string Converter::getIVal() const {
	if (type != INIT || dVal < INT_MIN || INT_MAX < dVal)
		return ("impossible");
	std::stringstream res;
	res << static_cast<int>(dVal);
	return res.str();
}

std::string Converter::getFVal() const {
	switch (type) {
		case INF:	return ("inff");
		case MINF:	return ("-inff");
		case NAN:	return ("nanf");
		default:	break;
	}
	std::stringstream res;
	res << static_cast<float>(dVal);
	std::string restr = res.str();
	for (int i=0; restr[i]; i++) {
		if (i != 0 && !isdigit(restr[i]))
			return(restr + "f");
		if (restr[i] == '.')
			return(restr + "f");
	}
	return restr + ".0f";
}

std::string Converter::getDVal() const{
	switch (type) {
		case INF:	return ("inf");
		case MINF:	return ("-inf");
		case NAN:	return ("nan");
		default:	break;
	}
	std::stringstream res;
	res << dVal;
	std::string restr = res.str();
	for (int i=0; restr[i]; i++) {
		if (restr[i] == '.' || (i != 0 && !isdigit(restr[i])))
			return(restr);
	}
	return restr + ".0";
}