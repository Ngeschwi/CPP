#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		const Weapon		&club;
	
	public:
		HumanA(std::string name, const Weapon &club);
		~HumanA();

		void	attack() const;
};

#endif