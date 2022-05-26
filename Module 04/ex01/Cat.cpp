#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void)
{
	std::cout << "Default constructor Cat called" << std::endl;
	this->type = "Cat";
	this->Brain = new class Brain();
	return ;
}

Cat::Cat(Cat const & src)
{
	*this = src;
	return ;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	int	i = 0;

	if (this != &rhs)
		this->type = "Cat";
	while (i < 100)
	{
		this->Brain->setIdeas(i, rhs.Brain->getIdeas(i));
		i++;
	}
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou !" << std::endl;
	return ;
}

void	Cat::setIdeas(int index, std::string idea)
{
	Brain->setIdeas(index, idea);
	return ;
}

std::string	Cat::getIdeas(int index) const
{
	return Brain->getIdeas(index);
}

Brain*	Cat::getBrain(void) const
{
	return this->Brain;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
	delete this->Brain;
	return ;
}