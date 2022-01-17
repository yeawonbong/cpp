#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

# define BLUE "\033[1;34m"
# define LBLUE "\033[34m"
# define GRAY "\033[1;30m"
# define RESET "\033[1;0m"
# define RED "\033[1;31m"

class Base
{
public :

	virtual ~Base();

	static bool verbose;
};

#endif