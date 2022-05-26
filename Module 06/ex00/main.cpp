#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Argument error" << std::endl;
		return 1;
	}
	Convert convert;
	try
	{
		convert.checkType(argv[1]);
		convert.printAllConvert();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}