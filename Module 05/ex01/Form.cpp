#include "Form.hpp"

Form::Form(void) : name("no_name"), grade_to_signe(150), grade_to_exec(150)
{
	std::cout << "Default Construct Form call" << std::endl;
	return ;
}

Form::Form(std::string name, int grade_to_signe, int grade_to_exec) : name(name), grade_to_signe(grade_to_signe), grade_to_exec(grade_to_exec)
{
	std::cout << "Construct Form call" << std::endl;
	this->is_signed = false;
	if (grade_to_exec > 150 || grade_to_signe > 150)
		throw GradeTooLowException();
	else if (grade_to_exec < 1 || grade_to_signe < 1)
		throw GradeTooHighException();
	return ;
}

Form::Form(Form const & src) : name(src.getName()), is_signed(src.isSigned()), grade_to_signe(src.getSignedGrade()), grade_to_exec(src.getExecGrade())
{
	return ;
}

Form &	Form::operator=(Form const & rhs)
{
	if (this != &rhs)
		this->is_signed = rhs.isSigned();
	return *this;
}

std::string Form::getName(void) const
{
	return this->name;
}

int	Form::getSignedGrade(void) const
{
	return this->grade_to_signe;
}

int	Form::getExecGrade(void) const
{
	return this->grade_to_exec;
}

bool	Form::isSigned() const
{
	return this->is_signed;
}

bool	Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() < this->grade_to_signe)
		throw	GradeTooLowException();
	else if (src.getGrade() == 0)
		throw	GradeTooHighException();
	else
	{
		this->is_signed = true;
		return true;
	}
}

Form::~Form(void)
{
	std::cout << "Destructor Form call" << std::endl;
	return ;
}