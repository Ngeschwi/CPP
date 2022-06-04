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

Form	*creatsPresident(const std::string target)
{
	return (new PreForm(target));
}

Form	*creatsRobot(const std::string target)
{
	return (new RobForm(target));
}

Form	*creatsShrubbery(const std::string target)
{
	return (new ShrForm(target));
}

Form	*Intern::makeForm(const std::string name_form, const std::string name_target)
{
	Form *(*all_forms[])(const std::string target) = {&creatsPresident, &creatsRobot, &creatsShrubbery};
	std::string forms[] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (name_form == forms[i])
		{
			std::cout << "Intern creates " << name_form << std::endl;
			return (all_forms[i](name_target));
		}
	}
	std::cout << "No form call " << name_form << std::endl;
	return (NULL);
}

Intern::~Intern(void)
{
	std::cout << "Destructor Intern call" << std::endl;
	return ;
}