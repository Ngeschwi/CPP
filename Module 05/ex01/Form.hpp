#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				is_signed;
		const int			grade_to_signe;
		const int			grade_to_exec;

	public:
		Form(std::string name, int grade_to_signe, int grade_to_exec);
		Form(Form const &src);

		Form &	operator=(const Form &src);

		std::string	getName(void) const;
		int			getSignedGrade(void) const;
		int			getExecGrade(void) const;
		bool		isSigned(void) const;
		bool		beSigned(Bureaucrat &src);

		~Form(void);
};

#endif