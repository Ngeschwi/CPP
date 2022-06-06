#include "inter.hpp"

int	main()
{
	int	size = 5;
	int tab_int[size];
	std::string tab_string[size];

	for (int i = 0; i < size; i++)
		tab_int[i] = i;
	::inter(tab_int, size, &(::fct_print));

	std::cout << "---" << std::endl;

	for (int i = 0; i < size; i++)
		tab_string[i] = "hi";
	::inter(tab_string, size, &(::fct_print));

	return 0;
}