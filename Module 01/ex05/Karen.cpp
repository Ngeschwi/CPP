#include "Karen.hpp"
#include <map>
#include <functional>

Karen::Karen()
{
	return ;
}

void	Karen::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
	return ;
}

void	Karen::info()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl; 
	return ;
}

void	Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl << std::endl; 
	return ;
}

void	Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl; 
	return ;
}

void	Karen::complain(std::string level)
{
	int		i = 0;
	std::string	tab[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void	(Karen::*fct[4])(void);
	fct[0] = &Karen::debug;
	fct[1] = &Karen::info;
	fct[2] = &Karen::warning;
	fct[3] = &Karen::error;

	while (i < 4)
	{
		if (level.compare(tab[i]) == 0)
			(this->*fct[i])();
		i++;
	}
}

Karen::~Karen()
{
	return ;
}