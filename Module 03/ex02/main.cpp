#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ScavTrap	scav_A("Bob");
	FragTrap	frag_A("Bryan");

	scav_A.attack("Jean");
	frag_A.attack("George");
	scav_A.takeDamage(6);
	frag_A.takeDamage(6);
	scav_A.beRepaired(10);
	frag_A.beRepaired(10);
	scav_A.guardGate();
	frag_A.highFivesGuys();

	return 0;
}
