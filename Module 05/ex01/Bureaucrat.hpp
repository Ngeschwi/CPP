#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string	name;
		int			grade;

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);

		Bureaucrat &	operator=(Bureaucrat const & rhs);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		increaseGrade(void);
		void		decreaseGrade(void);
		void		getInfoBureaucrat(void) const;
		void		signForm(Form &src);
		
		~Bureaucrat(void);
};

class GradeTooHighException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "The grade is too high";
		}
};
class GradeTooLowException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "The grade is too low";
		}
};

#endif