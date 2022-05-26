#include "Zombie.hpp"

Zombie::Zombie(std::string name) : zombie_name(name)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

void	Zombie::annonced(void) const
{
	std::cout << this->zombie_name << " BraiiiiiiinnnzzzZ" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Destructeur " << this->zombie_name << " called" << std::endl;
	return ;
}