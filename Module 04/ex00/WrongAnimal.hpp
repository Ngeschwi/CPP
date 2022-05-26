#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <stdio.h>
# include <stdlib.h>
# include <iostream>
# include <iomanip>

class WrongAnimal
{
	protected:
		std::string	type;
	
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & src);

		WrongAnimal &	operator=(WrongAnimal const & rhs);

		std::string	getType(void) const;

		virtual void makeSound(void) const;
		
		virtual ~WrongAnimal(void);
};

#endif