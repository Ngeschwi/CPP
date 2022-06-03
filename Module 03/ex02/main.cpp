#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	clap_A("Bob");
	ScavTrap	scav_A("Kevin");
	FragTrap	frag_A("Bryan");

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

	std::cout << "--- Fragtrap : ---" << std::endl;
	frag_A.attack("George");
	std::cout << std::endl;
	frag_A.takeDamage(6);
	std::cout << std::endl;
	frag_A.beRepaired(10);
	std::cout << std::endl;
	frag_A.highFivesGuys();


	return 0;
}
