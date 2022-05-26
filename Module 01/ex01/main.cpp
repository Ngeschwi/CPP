#include "Zombie.hpp"

int main()
{
	Zombie	*horde = zombieHorde(10, "Bob");
	int		i = 0;

	while (i < 10)
	{
		horde[i].annonced();
		i++;
	}

	delete [] horde;

	return 0;
}