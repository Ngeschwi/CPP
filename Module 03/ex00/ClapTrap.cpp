#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitpoints(10), hitpoints_max(10), energy_points(10), attack_damage(0)
{
	std::cout << "Default construtor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	return;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->hitpoints = rhs.hitpoints;
		this->energy_points = rhs.energy_points;
		this->attack_damage = rhs.attack_damage;
	}
	return *this;
}

std::string	ClapTrap::getName(void) const
{
	return this->name;
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy_points -= 1;
		std::cout << "He has " << this->energy_points << " energy left now!" << std::endl;
	}
	else
		std::cout << "He can't attack, he doesn't have enought energy!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitpoints <= 0)
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->name << " took " << amount << " damages!" << std::endl;
		this->hitpoints -= amount;
		std::cout << "He has " << this->hitpoints << " hit points left now!" << std::endl;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitpoints <= 0)
		std::cout << "ClapTrap " << this->name << " can't be repaired because he's dead!" << std::endl;
	else if (this->energy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " has been healed for " << amount << " hit points!" << std::endl;
		this->hitpoints += amount;
		if (this->hitpoints > this->hitpoints_max)
			this->hitpoints = this->hitpoints_max;
		this->energy_points -= 1;
		std::cout << "He has " << this->hitpoints << " hit points!" << std::endl;
		std::cout << "He has " << this->energy_points << " energy left now!" << std::endl;
	}
	else
		std::cout << "He can't attack, he doesn't have enought energy!" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
