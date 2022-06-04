#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <stdio.h>
# include <stdlib.h>
# include <iostream>
# include <iomanip>

class AAnimal
{
	protected:
		std::string	type;
		AAnimal(void);
	
	public:
		AAnimal(AAnimal const & src);

		AAnimal &	operator=(AAnimal const & rhs);

		std::string	getType(void) const;

		virtual void makeSound(void) const = 0;
		
		virtual ~AAnimal(void);
};

#endif