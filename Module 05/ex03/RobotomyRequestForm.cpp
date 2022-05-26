#include "RobotomyRequestForm.hpp"

RobForm::RobForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << "Constructor RobForm call" << std::endl;
	return ;
}

RobForm::RobForm(RobForm const & src) : Form(src), target(src.getTarget())
{
	return ;
}

RobForm &	RobForm::operator=(RobForm const & rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
		this->target = rhs.getTarget();
	}
	return *this;
}

std::string	RobForm::getTarget(void) const
{
	return this->target;
}

void	RobForm::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned())
		throw FormIsNotSigned();
	else if (executor.getGrade() > this->getExecGrade() || executor.getGrade() == 0)
		throw GradeTooLowException();
	else
	{
		std::cout << executor.getName() << " executed " << this->getName() << std::endl;
		std::cout << "*DRILLING NOISES*" << std::endl;
		int	nbr_aleat = rand() % 10 + 1;
		if (nbr_aleat > 5)
			std::cout << "operation failed" << std::endl;
		else
			std::cout << this->target <<" was robotomized" << std::endl;
	}
	return ;
}

RobForm::~RobForm(void)
{
	std::cout << "Destructor RobForm call" << std::endl;
	return ;
}
