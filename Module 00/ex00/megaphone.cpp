#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	int		i;
	size_t	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (j < std::strlen(argv[i]))
			{
				argv[i][j] = toupper(argv[i][j]);
				std::cout << argv[i][j];
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}