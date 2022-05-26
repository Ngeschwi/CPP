#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, const Weapon &club) : name(name), club(club)
{
	return ;
}

void	HumanA::attack(void) const
{
	std::cout << this->name << "attack with his " << this->club.getType() << std::endl;
	return ;
}

HumanA::~HumanA()
{
	return ;
}