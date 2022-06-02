#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "Default constructor DiamondTrap called" << std::endl;
	this->name = name;
	ClapTrap::setName(name + "_clap_name");
	this->hitpoints = FragTrap::hitpoints;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	*this = src;
	return ;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.getName();
		ClapTrap::setName(name + "_clap_name");
		this->hitpoints = 100;
		this->energy_points = 100;
		this->attack_damage = 30;
	}
	return *this;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name : " << this->name << ", and my ClapTrap name : " << ClapTrap::getName() << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor Diamond called" << std::endl;
	return ;
}