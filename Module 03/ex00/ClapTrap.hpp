#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <stdio.h>
# include <stdlib.h>
# include <iostream>
# include <iomanip>

class ClapTrap
{
	private:
		std::string	name;
		int			hitpoints;
		int			hitpoints_max;
		int			energy_points;
		int			attack_damage;

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);

		ClapTrap &	operator=(ClapTrap const & src);

		std::string	getName(void) const;

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif