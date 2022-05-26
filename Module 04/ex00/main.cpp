#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	 main()
{
	const Animal* meta =  new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();

	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;

	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	wrong->makeSound();
	wrongcat->makeSound();

	delete meta;
	delete cat;
	delete dog;
	delete wrong;
	delete wrongcat;
	
	return 0;
}
