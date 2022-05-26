#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		const Weapon		*club;
	
	public:
		HumanB(std::string name);
		~HumanB();

		void	attack() const;
		void	setWeapon(const Weapon &club);
};

#endif