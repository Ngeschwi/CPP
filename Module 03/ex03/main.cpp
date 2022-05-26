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

	std::cout << "--- ClapTrap ---" << std::endl;
	clap_A.attack("Jean");
	clap_A.takeDamage(6);
	clap_A.beRepaired(10);
	std::cout << "--- ScavTrap ---" << std::endl;
	scav_A.attack("Bob");
	scav_A.takeDamage(6);
	scav_A.beRepaired(10);
	scav_A.guardGate();
	std::cout << "--- FragTrap ---" << std::endl;
	frag_A.attack("George");
	frag_A.takeDamage(6);
	frag_A.beRepaired(10);
	frag_A.highFivesGuys();
	std::cout << "--- DiamondTrap ---" << std::endl;
	diamond_A.attack("Jean-luc");
	diamond_A.takeDamage(6);
	diamond_A.beRepaired(10);
	diamond_A.whoAmI();
	std::cout << "   -------------" << std::endl;

	return 0;
}
