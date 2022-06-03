#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void)
{
	std::cout << "Default constructor Dog called" << std::endl;
	this->type = "Dog";
	this->_Brain = new class Brain();
	return ;
}

Dog::Dog(Dog const & src)
{
	*this = src;
	return ;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	if (this == &rhs)
		return *this;
	this->type = rhs.type;
	this->_Brain = new Brain();
	*this->_Brain = *rhs._Brain;
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf !" << std::endl;
	return ;
}

void	Dog::setIdeas(int index, std::string idea)
{
	this->_Brain->setIdeas(index, idea);
	return ;
}

std::string	Dog::getIdeas(int index) const
{
	return this->_Brain->getIdeas(index);
}

Brain*	Dog::getBrain(void) const
{
	return this->_Brain;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called" << std::endl;
	delete this->_Brain;
	return ;
}