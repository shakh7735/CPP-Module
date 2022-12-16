#ifndef _FORM_HPP_
# define _FORM_HPP_

# include <stdexcept>
# include <iostream>
# include <string>

# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
    private:
    	Form();
    
    	std::string const name;
    	bool sign;
    	int const signGrade;
    	int const executeGrade;
    	
    public:
    	Form(std::string const name, int const signGrade, int const executeGrade);
    	Form(Form const &other);
    	virtual ~Form();
    
    	class GradeTooHighException: public std::exception {
    		virtual const char* what() const throw();
    	};
    	class GradeTooLowException: public std::exception {
    		virtual const char* what() const throw();
    	};
    	class FormAlreadySignedException: public std::exception {
    		virtual const char* what() const throw();
    	};
    	class UnsignedFormException: public std::exception {
    		virtual const char* what() const throw();
    	};
    
    	Form &operator=(Form const &other);
    
    	std::string const getName(void) const;
    	bool isSigned(void) const;
    	int getSignGrade(void) const;
    	int getExecuteGrade(void) const;
    
    	void beSigned(Bureaucrat const &bureaucrat);
    	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif