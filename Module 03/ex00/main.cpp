#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	clap_A("Bob");

	clap_A.attack("Jean");
	clap_A.takeDamage(6);
	clap_A.beRepaired(10);

	return 0;
}