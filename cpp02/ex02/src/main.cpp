#include "../include/Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << std::left;
	std::cout << std::setw(15) << "test a" << ": " << a << std::endl;
	std::cout << std::setw(15) << "test ++a" << ": " << ++a << std::endl;
	std::cout << std::setw(15) << "test a" << ": " << a << std::endl;
	std::cout << std::setw(15) << "test a++" << ": " << a++ << std::endl;
	std::cout << std::setw(15) << "test a" << ": " << a << std::endl;

	std::cout << std::setw(15) << "test b" << ": " << b << std::endl;
	
	std::cout << std::setw(15) << "test a<=b" << ": " << (a<=b) << std::endl;
	std::cout << std::setw(15) << "test a==b" << ": " << (a==b) << std::endl;
	std::cout << std::setw(15) << "test max(a,b)"<< ": " << Fixed::max( a, b ) << std::endl;
	std::cout << std::setw(15) << "test min(a,b)"<< ": " << Fixed::min( a, b ) << std::endl;

return 0;
}