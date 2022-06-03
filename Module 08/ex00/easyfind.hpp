#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class NotFound : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Element not found";
		}
};

template <typename T>
void	easyfind(T container, int to_find)
{
	typename	T::iterator it;
	
	it = find(container.begin(), container.end(), to_find);
	if (it != container.end())
		std::cout << "Element found : " << *it << std::endl;
	else
		throw NotFound();
}

#endif