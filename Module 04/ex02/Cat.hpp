#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : virtual public AAnimal
{
	private:
		Brain* _Brain;

	public:
		Cat(void);
		Cat(Cat const & src);
		~Cat(void);

		Cat &	operator=(Cat const & rhs);

		void			makeSound(void) const;
		void			setIdeas(int index, std::string idea);
		std::string		getIdeas(int index) const;
		class Brain*	getBrain(void) const;
};

#endif