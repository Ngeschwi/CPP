#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default constructor Dog called" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::Dog(Dog const & src)
{
	*this = src;
	return ;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf !" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called" << std::endl;
	return ;
}