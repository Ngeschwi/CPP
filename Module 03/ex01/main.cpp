#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	clap_A("Bob");
	ScavTrap	scav_A("Bryan");

	clap_A.attack("Jean");
	std::cout << std::endl;
	scav_A.attack("George");
	std::cout << std::endl;
	clap_A.takeDamage(6);
	std::cout << std::endl;
	scav_A.takeDamage(6);
	std::cout << std::endl;
	clap_A.beRepaired(10);
	std::cout << std::endl;
	scav_A.beRepaired(10);
	std::cout << std::endl;
	scav_A.guardGate();

	return 0;
}
