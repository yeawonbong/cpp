# include "../include/Span.hpp"

bool    verbose = false;

Span::Span() {
	if (verbose)
		std::cout << "Default Constructor called" << std::endl;
}

Span::Span(unsigned int n) {
	if (verbose)
		std::cout << "Constructor called" << std::endl;	
}

Span::Span(const Span &src) {
	if (verbose)
		std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}

Span::~Span() {
	if (verbose)
		std::cout << "Destructor called" << std::endl;
	// vector 메모리 해제
}

Span	&Span::operator=(const Span &src) {
	if (verbose)
		std::cout << "Assignment Operator called" << std::endl;
	this->numbers = src.numbers;
	return *this;
}

void	Span::addNumber(int num) {
	if (find(numbers.begin(), numbers.end(), num) != numbers.end())
		throw std::invalid_argument("The number already exists");
	numbers.push_back(num);
}

int		Span::shortestSpan() {
	if (numbers.size() < 2)
		throw std::bad_function_call() ; // exception 뭐 던질까..
		//하나 이하면 exception
		//"There is no span to find, numbers are less than two"
	//vecter sort
}

int		Span::longestSpan() {
	//하나 이하면 exception
}