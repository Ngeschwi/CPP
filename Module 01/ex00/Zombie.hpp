#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

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