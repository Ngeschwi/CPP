#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default constructor Cat called" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(Cat const & src)
{
	*this = src;
	return ;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
		this->type = "Cat";
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou !" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
	return ;
}