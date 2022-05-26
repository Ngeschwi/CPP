#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	 main()
{
	size_t	nbr = 4;

	Animal** animals = new Animal*[nbr];
	for (size_t i = 0; i < nbr; i++)
	{
		if (i < nbr / 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	for (size_t i = 0; i < nbr; i++)
	{
		animals[i]->makeSound();
	}

	for (size_t i = 0; i < nbr; i++)
	{
		delete animals[i];
	}
	
	return 0;
}