#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	 main()
{
	std::cout << "---Animal : ---" << std::endl;
	const Animal* meta =  new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();

	std::cout << "-type:" << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << std::endl;

	std::cout << "-makesound:" << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "---Wrong Animal : ---" << std::endl;
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << "-type:" << std::endl;
	std::cout << wrongcat->getType() << std::endl;
	std::cout << std::endl;

	std::cout << "-makesound:" << std::endl;
	wrong->makeSound();
	wrongcat->makeSound();
	std::cout << std::endl;

	delete meta;
	delete cat;
	delete dog;
	delete wrong;
	delete wrongcat;
	
	return 0;
}
