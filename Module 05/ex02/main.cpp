#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	 main()
{
	Bureaucrat* bob = new Bureaucrat("Bob", 40);
	Bureaucrat* jean = new Bureaucrat("Jean", 1);
	Bureaucrat* kevin = new Bureaucrat("Kevin", 150);

	std::cout << "---" << std::endl;
	
	bob->getInfoBureaucrat();
	jean->getInfoBureaucrat();
	kevin->getInfoBureaucrat();
	
	std::cout << "---" << std::endl;
	
	ShrForm	shrForm("Garden");
	RobForm	robForm("Wall-e");
	PreForm	preForm("Bertrand");

	std::cout << "---ShrForm---" << std::endl;
	kevin->executeform(shrForm);
	kevin->signForm(shrForm);
	jean->signForm(shrForm);
	kevin->executeform(shrForm);
	jean->executeform(shrForm);

	std::cout << "---robForm---" << std::endl;
	jean->executeform(robForm);
	kevin->signForm(robForm);
	bob->signForm(robForm);
	kevin->executeform(robForm);
	bob->executeform(robForm);

	std::cout << "---preForm---" << std::endl;
	jean->executeform(preForm);
	bob->signForm(preForm);
	jean->signForm(preForm);
	bob->executeform(preForm);
	jean->executeform(preForm);

	std::cout << "---" << std::endl;

	delete bob;
	delete jean;
	delete kevin;
}