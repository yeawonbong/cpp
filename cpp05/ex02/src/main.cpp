#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"

int main(void) {
	Bureaucrat::verbose = false;
	Form::verbose = false;
	std::cout << std::endl;
	std::cout << "<Testing Form>" << std::endl;
	try
	{
		Form Form1("Form1", 3, 3);
		std::cout << Form1;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "<Testing Signing Form>" << std::endl;
	try
	{
		Bureaucrat br("testbr", 2);
		Form	Form2("Form2", 3, 5);
		std::cout << Form2;
		Form2.beSigned(br);
		std::cout << Form2;

	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "<Testing Signing Form-Failed>" << std::endl;
	try
	{
		Bureaucrat br("testbr", 100);
		Form	Form2("Form2", 3, 5);
		std::cout << Form2;
		Form2.beSigned(br);
		std::cout << Form2;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "<Testing Signing Form-Failed (already singed Form)>" << std::endl;
	try
	{
		Bureaucrat br("testbr", 1);
		Form	Form2("Form2", 3, 5);
		std::cout << Form2;
		Form2.beSigned(br);
		std::cout << Form2;
		Form2.beSigned(br);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}