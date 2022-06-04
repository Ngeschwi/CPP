#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <fstream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string	name;
		int			grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);

		Bureaucrat &	operator=(Bureaucrat const & rhs);

		std::string	getName(void) const;
		void		setName(std::string name);
		int			getGrade(void) const;
		void		setGrade(int grade);
		void		increaseGrade(void);
		void		decreaseGrade(void);
		void		getInfoBureaucrat(void) const;
		void		signForm(Form &src);
		void		executeform(Form const & form);
		
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
class FormIsSigned : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "The form is already signed";
		}
};
class FormIsNotSigned : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "The form is not signed";
		}
};

#endif