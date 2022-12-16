# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
    if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}
 
Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
    if (other.getGrade() <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (other.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	this->operator=(other);
}


Bureaucrat & Bureaucrat::operator=(const Bureaucrat& op)
{
	if (this == &op)
		return (*this);
	this->grade = op.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat() 
{
    std::cout << "Delete " << this->name << std::endl;
}

//=========================================================

std::string Bureaucrat::getName() const
{
    return (this->name);
}
      
int Bureaucrat::getGrade() const
{
    return (this->grade);  
}

void	Bureaucrat::incrementGrade(void)
{
    if (this->grade - 1 <= 0)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade -= 1;
}

void    Bureaucrat::decrementGrade(void)
{
    if (this->grade + 1 >= 151)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade += 1;
}

std::ostream	&operator<<(std::ostream & out, const Bureaucrat & b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (out);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too Low";
}

void Bureaucrat::signForm(Form &form) const
{
	if (form.isSigned())
	{
		std::cout << *this << " couldn’t sign " << form
				<< " because the form is already signed." << std::endl;
	}
	else if (form.getSignGrade() < this->grade)
	{
		std::cout << *this << " couldn’t sign " << form
				<< " because it's grade is too low." << std::endl;
	}
	else
	{
		std::cout << *this << " signed " << form << std::endl;
	}
	form.beSigned(*this);
}