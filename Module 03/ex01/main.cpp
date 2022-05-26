#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	clap_A("Bob");
	ScavTrap	scav_A("Bryan");

	clap_A.attack("Jean");
	scav_A.attack("George");
	clap_A.takeDamage(6);
	scav_A.takeDamage(6);
	clap_A.beRepaired(10);
	scav_A.beRepaired(10);
	scav_A.guardGate();

	return 0;
}
