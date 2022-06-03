#ifndef DIAMOND_HPP
# define DIAMOND_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	name;

	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & src);
		~DiamondTrap(void);

		DiamondTrap &	operator=(DiamondTrap const & rhs);

		void	whoAmI(void);
		void	attack(std::string const & target);
};

#endif