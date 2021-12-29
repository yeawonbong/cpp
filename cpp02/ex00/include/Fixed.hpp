#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed 
{
private:
	int	fixedPointVal;
	static const int	fractionalBits = 8;
	
public:
	Fixed(void);
	Fixed(const Fixed &src); // copy constructor
	~Fixed(void);

	// operator overload
	Fixed 	&operator=(const Fixed &other); 
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif

