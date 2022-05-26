#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	 main()
{
	Intern intern;
	Form *forms[4];
	std::string formTypes[4] = { "shrubbery creation", "robotomy request", "presidential pardon", "wrong form"};

	for (int i = 0; i < 4; i++)
		forms[i] = intern.makeForm(formTypes[i], "target");

	Bureaucrat bob("Bob", 1);
	for (int i = 0; i < 3; i++) 
	{
		bob.signForm(*forms[i]);
		bob.executeform(*forms[i]);
		std::cout << "\n";
	}

	for (int i = 0; i < 4; i++)
		delete forms[i];
}