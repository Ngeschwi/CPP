#include "ShrubberyCreationForm.hpp"

ShrForm::ShrForm(void) : Form("ShrubberyCreationForm", 145, 137), target("no_target")
{
	std::cout << "Default Constructor ShrForm call" << std::endl;
	return ;
}

ShrForm::ShrForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "Constructor ShrForm call" << std::endl;
	return ;
}

ShrForm::ShrForm(ShrForm const & src) : Form(src), target(src.getName())
{
	return ;
}

ShrForm &	ShrForm::operator=(ShrForm const & rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
		this->target = rhs.getTarget();
	}
	return *this;
}

std::string	ShrForm::getTarget(void) const
{
	return this->target;
}

void	ShrForm::execute(Bureaucrat const & executor) const
{
	if (!this->isSigned())
		throw FormIsNotSigned();
	else if (executor.getGrade() > this->getExecGrade() || executor.getGrade() == 0)
		throw GradeTooLowException();
	else
	{
		std::ofstream ofs;
		ofs.open(this->getTarget() + "_shrubbery", std::ifstream::out);
		if (ofs.is_open())
		{
			ofs << "        ###" << std::endl;
			ofs << "    ###########" << std::endl;
			ofs << " #################" << std::endl;
			ofs << " #################" << std::endl;
			ofs << "  ###############" << std::endl;
			ofs << "        |||" << std::endl;
			ofs << "        |||" << std::endl;
			ofs << "        |||" << std::endl;
			ofs << "        |||" << std::endl;
		}
		std::cout << executor.getName() << " executed " << this->getName() << std::endl;
	}
	return ;
}

ShrForm::~ShrForm(void)
{
	std::cout << "Destructor ShrForm call" << std::endl;
	return ;
}

