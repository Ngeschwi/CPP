#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("no_name"), grade(150)
{
	std::cout << "Default Constructor Bureaucrat call" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	std::cout << "Constructor Bureaucrat call" << std::endl;
	if (grade < 1 || grade > 150)
	{
		std::cout << "Error grade, initialisation grade at 150" << std::endl;
		this->grade = 150;
		if (grade < 1)
			throw GradeTooHighException();
		else
			throw GradeTooLowException();
	}
	else
		this->grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
	return ;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->grade = rhs.getGrade();
	}
	return *this;
}

std::string	Bureaucrat::getName(void) const
{
	return this->name;
}

void	Bureaucrat::setName(std::string name)
{
	this->name = name;
	return ;
}

int	Bureaucrat::getGrade(void) const
{
	return this->grade;
}

void	Bureaucrat::setGrade(int grade)
{
	this->grade = grade;
	return ;
}

void	Bureaucrat::increaseGrade(void)
{
	if (this->grade <= 1)
		throw GradeTooHighException();
	else
		setGrade(this->grade--);
	return ;
}

void	Bureaucrat::decreaseGrade(void)
{
	if (this->grade >= 150)
		throw GradeTooLowException();
	else
		setGrade(this->grade++);
	return ;
}

void	Bureaucrat::getInfoBureaucrat(void) const
{
	std::cout << this->name << ", Bureaucrat garde " << this->grade << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor Bureaucrat call" << std::endl;
	return ;
}
