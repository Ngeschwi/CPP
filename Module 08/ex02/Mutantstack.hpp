#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack(void);
		MutantStack(const MutantStack &src);
		MutantStack &operator=(const MutantStack &rhs);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
};

template <class T>
MutantStack<T>::MutantStack(void)
{
	std::cout << "Constructor Mutantstack call" << std::endl;
	return ;
}

template <class T>
MutantStack<T>::MutantStack(const MutantStack &src) : std::stack<T>(src) {}

template <class T>
MutantStack<T> &	MutantStack<T>::operator=(const MutantStack &rhs)
{
	if (this != &rhs)
		this = rhs;
	return *this;
}

template <class T>
MutantStack<T>::~MutantStack(void)
{
	std::cout << "Destructor MutantStack call" << std::endl;
	return ;
}

#endif