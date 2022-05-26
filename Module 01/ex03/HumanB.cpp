#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), club(nullptr)
{
	return ;
}

void	HumanB::attack(void) const
{
	if (this->club == nullptr)
		return ;
	std::cout << this->name << "attack with his " << this->club->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(const Weapon &club)
{
	this->club = &club;
	return ;
}

HumanB::~HumanB()
{
	return ;
}