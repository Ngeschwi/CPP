#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <stdio.h>
# include <stdlib.h>

class Zombie
{
	private:
		std::string	zombie_name;
	
	public:
		Zombie();
		~Zombie();

		void	annonced(void) const;
		void	setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif