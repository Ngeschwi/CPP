#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	clap_A("Bob");
	ScavTrap	scav_A("Bob");

	std::cout << "--- Claptrap : ---" << std::endl;
	clap_A.attack("Jean");
	std::cout << std::endl;
	clap_A.takeDamage(6);
	std::cout << std::endl;
	clap_A.beRepaired(10);
	std::cout << std::endl << std::endl;

	std::cout << "--- Scavtrap : ---" << std::endl;
	scav_A.attack("Jean");
	std::cout << std::endl;
	scav_A.takeDamage(6);
	std::cout << std::endl;
	scav_A.beRepaired(10);
	std::cout << std::endl;
	scav_A.guardGate();
	std::cout << std::endl << std::endl;;

	return 0;
}
