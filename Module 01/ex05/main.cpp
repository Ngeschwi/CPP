#include "Karen.hpp"

int	main()
{
	Karen	karen;

	std::cout << "Debug level :" << std::endl;
	karen.complain("DEBUG");
	std::cout << "Info level :" << std::endl;
	karen.complain("INFO");
	std::cout << "Warning level :" << std::endl;
	karen.complain("WARNING");
	std::cout << "Error level :" << std::endl;
	karen.complain("ERROR");
	std::cout << "Test level :" << std::endl;
	karen.complain("TEST");
}