#include "inter.hpp"

int	main()
{
	int *tab = new int[4];

	for (int i = 0; i < 4; i++)
		tab[i] = i;
	::inter(tab, 4, &(::fct_print));

	delete [] tab;

	return 0;
}