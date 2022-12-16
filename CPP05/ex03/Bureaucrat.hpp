#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

# include <stdexcept>
# include <iostream>
# include <string>

# include "Form.hpp"
class Form;

class Bureaucrat 
{
    public:
      Bureaucrat(const std::string &name, int grade);
      Bureaucrat(const Bureaucrat &other);
      Bureaucrat &operator=(const Bureaucrat &other);
      virtual ~Bureaucrat();
    
      std::string getName() const;
      int getGrade() const;
      void	incrementGrade();
      void	decrementGrade();
      
      void  signForm(Form &form) const;
      void  executeForm(Form const &form);
      
      class GradeTooHighException : public std::exception {
      public:
        virtual const char* what() const throw();
      };
    
      class GradeTooLowException : public std::exception {
      public:
        virtual const char* what() const throw();
      };
    
    private:
      Bureaucrat(void);
      const std::string name;
      int grade;
    };

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);

#endif