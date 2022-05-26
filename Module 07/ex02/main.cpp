#include "Array.hpp"

int	main()
{
	Array<int>	int_array(5);

	for (int i = 0; i < int_array.size(); i++)
		int_array[i] = i;
	
	std::cout << "Size of int_array : " << int_array.size() << std::endl;
	for (int i = 0; i < int_array.size() + 1; i++)
	{
		try
		{
			std::cout << "Index " << i << " : " << int_array[i] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "---" << std::endl;

	Array<std::string>	string_array(5);

	string_array[0] = "Hello";
	string_array[1] = "My";
	string_array[2] = "Name";
	string_array[3] = "Is";
	string_array[4] = "Pablo";
	std::cout << "Size of string_array : " << int_array.size() << std::endl;
	for (int i = 0; i < string_array.size() + 1; i++)
	{
		try
		{
			std::cout << "Index " << i << " : " << string_array[i] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "---" << std::endl;

	Array<int> int_array_bis(int_array);

	int_array_bis[0] = 100;

	std::cout << "int_array : " << int_array[0] << std::endl;
	std::cout << "int_array_bis : " << int_array_bis[0] << std::endl;

	return 0;
}