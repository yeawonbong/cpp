#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

int main(void) {
	Bureaucrat::verbose = false;
	Form::verbose = false;

	Bureaucrat amy("Amy", 1);
	Bureaucrat billy("Billy", 70);
	Bureaucrat carrol("Carrol", 150);

	std::cout << std::endl;
	std::cout << "<Testing ShrubberyCreationForm>" << std::endl;
	try
	{
		Form *form = new ShrubberyCreationForm("Form1");
		std::cout << form;
		amy.executeForm(*form);
		billy.executeForm(*form);
		carrol.executeForm(*form);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	// std::cout << "<Testing Signing Form>" << std::endl;
	// try
	// {
	// 	Bureaucrat br("testbr", 2);
	// 	Form	Form2("Form2", 3, 5);
	// 	std::cout << Form2;
	// 	Form2.beSigned(br);
	// 	std::cout << Form2;

	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << "Exception: " << e.what() << std::endl;
	// }
	// std::cout << std::endl;

	// // std::cout << std::endl;
	// std::cout << "<Testing Signing Form-Failed>" << std::endl;
	// try
	// {
	// 	Bureaucrat br("testbr", 100);
	// 	Form	Form2("Form2", 3, 5);
	// 	std::cout << Form2;
	// 	Form2.beSigned(br);
	// 	std::cout << Form2;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << "Exception: " << e.what() << std::endl;
	// }

	// std::cout << std::endl;
	// std::cout << "<Testing Signing Form-Failed (already singed Form)>" << std::endl;
	// try
	// {
	// 	Bureaucrat br("testbr", 1);
	// 	Form	Form2("Form2", 3, 5);
	// 	std::cout << Form2;
	// 	Form2.beSigned(br);
	// 	std::cout << Form2;
	// 	Form2.beSigned(br);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << "Exception: " << e.what() << std::endl;
	// }
}