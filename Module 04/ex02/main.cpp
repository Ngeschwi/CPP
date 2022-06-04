#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	 main()
{
	// AAnimal* test = new AAnimal();
	// test->makeSound();

	size_t	nbr = 2;

	AAnimal* Aanimals[nbr];
	for (size_t i = 0; i < nbr; i++)
	{
		if (i < nbr / 2)
			Aanimals[i] = new Cat();
		else
			Aanimals[i] = new Dog();
	}

	for (size_t i = 0; i < nbr; i++)
		Aanimals[i]->makeSound();

	for (size_t i = 0; i < nbr; i++)
		delete Aanimals[i];

	return 0;
}