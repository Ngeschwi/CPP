#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public Animal
{
	private:
		Brain* _Brain;

	public:
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);

		Dog &	operator=(Dog const & rhs);

		void			makeSound(void) const;
		void			setIdeas(int index, std::string idea);
		std::string		getIdeas(int index) const;
		class Brain*	getBrain(void) const;
};

#endif