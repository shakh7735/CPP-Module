#pragma once

# include <stdexcept>
# include <iostream>
# include <string>

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