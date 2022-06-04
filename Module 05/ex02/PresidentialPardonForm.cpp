#include "PresidentialPardonForm.hpp"

PreForm::PreForm(void) : Form("PresidentialPardonForm", 25, 5), target("no_target")
{
	std::cout << "Default Constructor PreForm call" << std::endl;
	return ;
}

PreForm::PreForm(std::string target) : Form("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout << "Constructor PreForm call" << std::endl;
	return ;
}

PreForm::PreForm(PreForm const & src) : Form(src), target(src.getTarget())
{
	return ;
}

PreForm &	PreForm::operator=(PreForm const & rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
		this->target = rhs.getTarget();
	}
	return *this;
}

std::string	PreForm::getTarget(void) const
{
	return this->target;
}

void	PreForm::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned())
		throw FormIsNotSigned();
	else if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	else
	{
		std::cout << executor.getName() << " executed " << this->getName() << std::endl;
		std::cout << this->target << " was forgiven by Zaphod Beeblebrox" << std::endl;
	}
	return ;
}

PreForm::~PreForm(void)
{
	std::cout << "Destructor PreForm call" << std::endl;
	return ;
}