#include "Bureaucrat.hpp"

int	 main()
{
	Bureaucrat bob("Bob", 49);
	Bureaucrat jean("Jean", 1);
	Bureaucrat kevin("Kevin", 150);

	std::cout << "---" << std::endl;
	
	bob.getInfoBureaucrat();
	jean.getInfoBureaucrat();
	kevin.getInfoBureaucrat();

	std::cout << "---" << std::endl;
	
	try
	{
		bob.increaseGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		jean.increaseGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		kevin.decreaseGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;
	
	bob.getInfoBureaucrat();
	jean.getInfoBureaucrat();
	kevin.getInfoBureaucrat();
	
	std::cout << "---" << std::endl;

	return 0;
}