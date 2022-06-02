#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	clap_A("Bob");

	clap_A.attack("Jean");
	std::cout << std::endl;
	clap_A.takeDamage(6);
	std::cout << std::endl;
	clap_A.beRepaired(10);
	std::cout << std::endl;

	return 0;
}