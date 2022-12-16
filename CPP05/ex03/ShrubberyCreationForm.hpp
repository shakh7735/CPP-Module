
#ifndef _SHRUBBERYCREATIONFORM_HPP_
# define _SHRUBBERYCREATIONFORM_HPP_

# include <string>
# include <fstream>
# include <ctime>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
    private:
    	ShrubberyCreationForm();
    
    	std::string const target;
    	static std::string const trees[2];
    	
    public:
    	ShrubberyCreationForm(std::string const &target);
    	ShrubberyCreationForm(ShrubberyCreationForm const &other);
    	virtual ~ShrubberyCreationForm();
    
    	static std::string const &name;
    
    	class TargetFileOpenException: public std::exception {
    		virtual const char* what() const throw();
    	};
    	class WriteException: public std::exception {
    		virtual const char* what() const throw();
    	};
    
    	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
    
    	void execute(Bureaucrat const &executor) const;
    	
    	static Form *generate(std::string const &target);
};

#endif