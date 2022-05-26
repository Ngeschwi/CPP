#include "Zombie.hpp"

int main()
{
	Zombie	bob("Bob");
	bob.annonced();

	Zombie	*jack = newZombie("Jack");
	jack->annonced();
	delete(jack);

	randomChump("Kevin");

	return 0;
}