#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed 
{
private:
	int	fixedPointVal;
	static const int	fractionalBits = 8;
	static bool			verbose;
public:
	Fixed(void);
	Fixed(const Fixed &src);
	~Fixed(void);

	Fixed &operator=(const Fixed &other);
	static void	setVerbose(bool value);
	static bool	getVerbose(void);
};

#endif