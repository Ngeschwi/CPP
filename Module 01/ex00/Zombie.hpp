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
		Zombie(std::string name);
		~Zombie();

		void		annonced(void) const;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif