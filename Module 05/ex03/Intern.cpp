#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Constructor Intern call" << std::endl;
	return ;
}

Intern::Intern(Intern const & src)
{
	*this = src;
	return ;
}

Intern &	Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return *this;
}

Form *	Intern::makeForm(std::string name_form, std::string name_target)
{
	std::map<std::string, Form(std::string)> intern_form = {
		{"shrubbery creation", new ShrForm(name_target)},
		{"robotomy request", new RobForm(name_target)},
		{"presidential pardon", new PreForm(name_target)}
	};
	std::map<std::string, Form(std::string)>::iterator it = intern_form.find(name_form);
	if (it != intern_form.end())
		return it->second;
	else
	{
		std::cout << "Intern can't make an unknown form!" << std::endl;
		return nullptr;
	}
}

Intern::~Intern(void)
{
	std::cout << "Destructor Intern call" << std::endl;
	return ;
}