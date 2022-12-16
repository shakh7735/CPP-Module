#include "ShrubberyCreationForm.hpp"

std::string const &ShrubberyCreationForm::name = std::string("Shrubbery Creation");

std::string const ShrubberyCreationForm::trees[2] = {
"             @           \n\
            /|\\          \n\
           /O|O\\         \n\
          /00|00\\        \n\
         /OOO|OOO\\       \n\
        /0000|0000\\      \n\
       /XXXXX|XXXXX\\     \n\
      /BBBBBB|BBBBBB\\    \n\
     /NNNNNNN|NNNNNNN\\   \n\
    /NNNNNNNN|NNNNNNNN\\  \n\
    -------------------   \n\
            |T|           \n\
            |T|",
"              $         \n\
             d$b         \n\
            d$$$b        \n\
           d$&&&$b       \n\
          d$$&&&$$b      \n\
        d$$$&&&&&$$$b    \n\
            d$$$b        \n\
           d$&&&$b       \n\
          d$$&&&$$b      \n\
        d$$$&&&&&$$$b    \n\
      d$$$$&&&&&&&$$$$b  \n\
           d$&&&$b       \n\
          d$$&&&$$b      \n\
        d$$$&&&&&$$$b    \n\
      d$$$$&&&&&&&$$$$b  \n\
    d$$$$$&&&&&&&&&$$$$$b\n\
            #####        \n\
            #####        \n\
            #####"
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
	Form(ShrubberyCreationForm::name, 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other):
	Form(other), target(other.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

const char* ShrubberyCreationForm::TargetFileOpenException::what() const throw()
{
	return "ShrubberyCreationFormException: Cannot open file";
}

const char* ShrubberyCreationForm::WriteException::what() const throw()
{
	return "ShrubberyCreationFormException: Error while writing to the file";
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	(void)other;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    srand(time(0));
	Form::execute(executor);
	std::string const shrubName = (this->target + "_shrubbery");
	std::ofstream outfile(shrubName);//, std::ios::out | std::ios::app);

	if (!outfile.is_open() || outfile.bad())
		throw TargetFileOpenException();
	outfile << ShrubberyCreationForm::trees[rand() % 2];
	if (outfile.bad())
	{
		outfile << std::endl;
		outfile.close();
		throw WriteException();
	}
	outfile << std::endl;
	outfile.close();
}