#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const & src);

		Intern &	operator=(const Intern & rhs);
		
		Form *	makeForm(std::string name_form, std::string name_target);

		~Intern(void);
};

#endif