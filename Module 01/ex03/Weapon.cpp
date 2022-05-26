#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
	return ;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}

const std::string &	Weapon::getType(void) const
{
	return (this->type);
}

Weapon::~Weapon()
{
	return ;
}