#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat boss("Gago", 1);
	std::cout << boss << std::endl;
	Bureaucrat jir("Jirik", 25);
	std::cout << jir << std::endl;

	Form *shrub = new ShrubberyCreationForm("home");
	std::cout << *shrub << std::endl;
	shrub->beSigned(boss);
	shrub->execute(jir);

	Form *pres = new PresidentialPardonForm("Jirik");
	std::cout << *pres << std::endl;
	boss.signForm(*pres);
	pres->execute(boss);

	Form *robot = new RobotomyRequestForm("Bender");
	std::cout << *robot << std::endl;
	robot->beSigned(boss);
	robot->execute(jir);
	jir.executeForm(*robot);
	jir.executeForm(*robot);

	std::cout << "---" << std::endl;

	try
	{
		jir.executeForm(*pres);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		RobotomyRequestForm robot = RobotomyRequestForm("Bender");
		std::cout << robot << std::endl;
		robot.execute(boss);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("Jirik");
		std::cout << pres << std::endl;
		boss.signForm(pres);
		pres.execute(jir);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("Jirik");
		std::cout << pres << std::endl;
		boss.signForm(pres);
		jir.executeForm(pres);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete shrub;
	delete pres;
	delete robot;

	return (0);
}