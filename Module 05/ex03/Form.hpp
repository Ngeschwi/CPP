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
		Form(void);
		Form(std::string name, int grade_to_signe, int grade_to_exec);
		Form(Form const &src);

		Form &	operator=(const Form &rhs);

		virtual std::string	getName(void) const;
		virtual int			getSignedGrade(void) const;
		virtual int			getExecGrade(void) const;
		virtual bool		isSigned(void) const;
		virtual bool		beSigned(Bureaucrat &src);
		virtual void		execute(Bureaucrat const & src) const = 0;

		virtual ~Form(void);
};

#endif