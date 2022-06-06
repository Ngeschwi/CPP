#include "easyfind.hpp"

int main()
{
	std::vector<int> container_int(6);

	for (int i = 0; i < 5; i++)
		container_int[i] = i;
	container_int[5] = 111;

	try
	{
		easyfind(container_int, 4);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---" << std::endl;
	try
	{
		easyfind(container_int, 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---" << std::endl;
	try
	{
		easyfind(container_int, 11);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}