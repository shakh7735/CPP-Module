#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	RobotomyRequestForm();

	std::string const target;
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &other);
	virtual ~RobotomyRequestForm();

	static std::string const &name;

	RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

	void execute(Bureaucrat const &executor) const;
};

#endif