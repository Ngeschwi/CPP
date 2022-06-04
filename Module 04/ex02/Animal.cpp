#include "Animal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "Default constructor AAnimal called" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const & src)
{
	*this = src;
	return ;
}

AAnimal &	AAnimal::operator=(AAnimal const & rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

std::string	AAnimal::getType(void) const
{
	return this->type;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "I'm Aanimal" << std::endl;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Destructor AAnimal called" << std::endl;
	return ;
}