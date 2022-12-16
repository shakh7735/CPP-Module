#ifndef _PRESIDENTIALPARDONFROM_HPP_
# define _PRESIDENTIALPARDONFROM_HPP_

# include "Form.hpp"

class PresidentialPardonForm: public Form
{
    private:
    	PresidentialPardonForm();
    
    	std::string const target;
    	
    public:
    	PresidentialPardonForm(std::string const &target);
    	PresidentialPardonForm(PresidentialPardonForm const &other);
    	virtual ~PresidentialPardonForm();
    
    	static std::string const &name;
    
    	PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
    
    	void execute(Bureaucrat const &executor) const;
    	
    	static Form *generate(std::string const &target);
};

#endif