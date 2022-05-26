#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Default construtor FragTrap called" << std::endl;
	this->name = name;
	this->hitpoints = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	*this = src;
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->hitpoints = 100;
		this->energy_points = 100;
		this->attack_damage = 30;
	}
	return *this;
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "Fragtrap want a High Five !!" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap called" << std::endl;
	return ;
}