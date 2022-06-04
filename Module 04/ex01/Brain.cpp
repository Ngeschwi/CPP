#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor Brain called" << std::endl;
	this->setBrain("I don't have brain");
	return ;
}

Brain::Brain(Brain const & src)
{
	*this = src;
	return ;
}

Brain &	Brain::operator=(Brain const & rhs)
{
	int	i = 0;

	if (this != &rhs)
	{
		while (i < 100)
		{
			this->setIdeas(i, rhs.getIdeas(i));
			i++;
		}
	}
	return *this;
}

void	Brain::setBrain(std::string idea)
{
	int	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = idea;
		i++;
	}
	return ;
}

void	Brain::setIdeas(int index, std::string idea)
{
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
	else
		std::cout << "Too much ideas for an animal" << std::endl;
	return ;
}

std::string	Brain::getIdeas(int index) const
{
	if (index >= 0 && index < 100)
		return this->_ideas[index];
	else
		return "Too much ideas for an animal";
	exit(0);
}

Brain::~Brain(void)
{
	std::cout << "Destructor Brain called" << std::endl;
	return ;
}