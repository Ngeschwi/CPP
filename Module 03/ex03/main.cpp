#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	std::cout << "--- ClapTrap ---" << std::endl;
	ClapTrap	clap_A("Bob");
	std::cout << "--- ScavTrap ---" << std::endl;
	ScavTrap	scav_A("Kevin");
	std::cout << "--- FragTrap ---" << std::endl;
	FragTrap	frag_A("Bryan");
	std::cout << "--- DiamondTrap ---" << std::endl;
	DiamondTrap	diamond_A("Moi");
	std::cout << "   -------------" << std::endl;

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
	std::cout << std::endl << std::endl;;

	std::cout << "--- DiamondTrap ---" << std::endl;
	diamond_A.attack("Jean-luc");
	std::cout << std::endl;
	diamond_A.takeDamage(6);
	std::cout << std::endl;
	diamond_A.beRepaired(10);
	std::cout << std::endl;
	diamond_A.whoAmI();
	std::cout << "   -------------" << std::endl;

	return 0;
}
