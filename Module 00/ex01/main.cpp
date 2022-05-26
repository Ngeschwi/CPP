#include "Phonebook.hpp"

int	main()
{
	Phonebook	phone(0);
	std::string	buff;

	std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
	while (std::getline(std::cin, buff) && !std::cin.eof())
	{
		if (buff.compare("ADD") == 0)
			phone.make_add();
		else if (buff.compare("SEARCH") == 0)
			phone.make_search();
		else if (buff.compare("EXIT") == 0)
			return 1;
		std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
	}	
	return 0;
}