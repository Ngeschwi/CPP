#include "Array.hpp"

#define MAX_VAL 10
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

	std::cout << std::endl;
	
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = i;
        mirror[i] = i;
    }

	std::cout << "--- Check number and mirror : ---" << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
    	try
		{
		   std::cout << "numbers[" << i << "] : " << numbers[i] << " <=> " << mirror[i] << " : mirror[" << i << "]" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
    }
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    // 	try
	// 	{
	// 	   std::cout << "mirror[" << i << "]  : " << mirror[i] << std::endl;
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// }

	std::cout << std::endl << "--- Try to acces to number with a bad index : ---" << std::endl;
    
	try
    {
		std::cout << "numbers[" << -2 << "] : " << numbers[-2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
		std::cout << "numbers[" << MAX_VAL << "] : " << numbers[MAX_VAL] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	std::cout << std::endl << "--- Check deep copy : ---" << std::endl;
 
	Array<int> tmp = numbers;
	Array<int> test(tmp);

	std::cout << std::endl;

	for (int i = 0; i < MAX_VAL; i++)
        numbers[i] = rand() % 10;

    for (int i = 0; i < MAX_VAL; i++)
    {
    	try
		{
		   std::cout << "numbers[" << i << "] : " << numbers[i] << " <=> " << mirror[i] << " : test[" << i << "]"  << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
    }
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    // 	try
	// 	{
	// 	   std::cout << "test[" << i << "]    : " << test[i] << std::endl;
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// }

	std::cout << std::endl;

	for (int i = 0; i < MAX_VAL; i++)
        test[i] = rand() % 10;

    for (int i = 0; i < MAX_VAL; i++)
    {
    	try
		{
		   std::cout << "test[" << i << "] : " << test[i] << " <=> " << tmp[i] << " : tmp[" << i << "]"  << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
    }
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    // 	try
	// 	{
	// 	   std::cout << "tmp[" << i << "]  : " << tmp[i] << std::endl;
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// }

	std::cout << std::endl;

    delete [] mirror;

    return 0;
}