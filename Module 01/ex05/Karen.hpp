#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <stdio.h>
# include <stdlib.h>
# include <cstdio>

class Karen
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		std::string	level;

	public:
		Karen();
		~Karen();

		void	complain(std::string level);
};

#endif