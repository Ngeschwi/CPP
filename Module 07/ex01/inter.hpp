#ifndef INTER_HPP
# define INTER_HPP

# include <iostream>

template <typename T>
void	fct_print(T arg) {
	std::cout << arg << std::endl;
	return ;
}

template <typename T_tab>
void	inter(T_tab *tab, int size, void (*fct)(T_tab &)) {
	for (int i = 0; i < size; i++)
		fct(tab[i]);
	return ;
}

#endif