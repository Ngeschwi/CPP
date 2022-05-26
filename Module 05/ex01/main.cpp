#include "Bureaucrat.hpp"
#include "Form.hpp"

int	 main()
{
	Bureaucrat* bob = new Bureaucrat("Bob", 49);
	Bureaucrat* jean = new Bureaucrat("Jean", 1);
	Bureaucrat* kevin = new Bureaucrat("Kevin", 150);

	std::cout << "---" << std::endl;
	
	bob->getInfoBureaucrat();
	jean->getInfoBureaucrat();
	kevin->getInfoBureaucrat();

	std::cout << "---" << std::endl;
	
	try
	{
		bob->increaseGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		jean->increaseGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		kevin->decreaseGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;
	
	bob->getInfoBureaucrat();
	jean->getInfoBureaucrat();
	kevin->getInfoBureaucrat();
	
	std::cout << "---" << std::endl;
	
	Form form("Form", 5, 50);

	jean->signForm(form);
	bob->signForm(form);

	std::cout << "---" << std::endl;

	delete bob;
	delete jean;
	delete kevin;
}