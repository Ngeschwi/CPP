#include "easyfind.hpp"

int main()
{
	std::vector<int> container_int {10, 20, 30, 40, 1111};

	try
	{
		easyfind(container_int, 30);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---" << std::endl;
	try
	{
		easyfind(container_int, 70);
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