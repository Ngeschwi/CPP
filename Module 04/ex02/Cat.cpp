#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void)
{
	std::cout << "Default constructor Cat called" << std::endl;
	this->type = "Cat";
	this->_Brain = new class Brain();
	return ;
}

Cat::Cat(Cat const & src)
{
	*this = src;
	return ;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	if (this == &rhs)
		return *this;
	this->type = rhs.type;
	this->_Brain = new Brain();
	*this->_Brain = *rhs._Brain;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou !" << std::endl;
	return ;
}

void	Cat::setIdeas(int index, std::string idea)
{
	this->_Brain->setIdeas(index, idea);
	return ;
}

std::string	Cat::getIdeas(int index) const
{
	return this->_Brain->getIdeas(index);
}

Brain*	Cat::getBrain(void) const
{
	return this->_Brain;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
	delete this->_Brain;
	return ;
}