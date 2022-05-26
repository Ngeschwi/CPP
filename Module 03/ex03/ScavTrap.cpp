#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Default construtor ScavTrap called" << std::endl;
	this->name = name;
	this->hitpoints = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	*this = src;
	return ;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->hitpoints = 100;
		this->energy_points = 50;
		this->attack_damage = 20;
	}
	return *this;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "Scavtrap " << this->name << " enterred in gate keeper mode!" << std::endl;
	return ;
}

void	ScavTrap::attack(std::string const & target)
{
	if (this->energy_points > 0)
	{
		std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points -= 5;
		std::cout << "He has " << this->energy_points << " energy left now!" << std::endl;
	}
	else
		std::cout << "He can't attack, he doesn't have enought energy!" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap called" << std::endl;
	return ;
}
