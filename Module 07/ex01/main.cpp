#include "inter.hpp"

int	main()
{
	int	size = 10;
	int *tab = new int[size];

	for (int i = 0; i < size; i++)
		tab[i] = i;
	::inter(tab, size, &(::fct_print));

	delete [] tab;

	return 0;
}