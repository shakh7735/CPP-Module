#include <iostream>
#include "Bureaucrat.hpp"

int main() 
{
    Bureaucrat boss("Gago", 100);
	std::cout << boss << std::endl;

	Form form1("Form1", 100, 50);
	std::cout << form1 << std::endl;
	form1.beSigned(boss);
	std::cout << form1 << std::endl;

	std::cout << "---" << std::endl;

	Form form2("Form2", 99, 50);
	std::cout << form2 << std::endl;
	try
	{
		boss.signForm(form2);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form2 << std::endl;

	std::cout << "---" << std::endl;

	Form form3("Form3", 101, 50);
	std::cout << form3 << std::endl;
	boss.signForm(form3);
	std::cout << form3 << std::endl;
	try
	{
		boss.signForm(form3);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form3 << std::endl;

	std::cout << "---" << std::endl;

	try
	{
		Form formException( "Check form exception", 99, 50);
		std::cout << formException << std::endl;
		formException.beSigned(boss);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		Form formException("form1", 100, 50);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		Form formException("form2", 0, 50);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		Form formException("form3", 100, 1000);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		Form formException("form4", 100, 0);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
		
	}

    return (0);
}