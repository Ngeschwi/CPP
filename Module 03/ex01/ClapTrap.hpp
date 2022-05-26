#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <stdio.h>
# include <stdlib.h>
# include <iostream>
# include <iomanip>

class ClapTrap
{
	protected:
		std::string	name;
		int			hitpoints;
		int			energy_points;
		int			attack_damage;

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		virtual ~ClapTrap(void);

		ClapTrap &	operator=(ClapTrap const & src);

		std::string	getName(void) const;
		void		setName(std::string name);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		
		virtual void	attack(std::string const & target);
};

#endif
