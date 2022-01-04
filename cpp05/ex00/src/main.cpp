#include "../include/Bureaucrat.hpp"

int main(void) {
    try 
    {
        Bureaucrat testB("test", 151);
    }
    catch (std::exception &e)
    {
		std::cout << "!Exception: " << e.what() << std::endl;
    }
}