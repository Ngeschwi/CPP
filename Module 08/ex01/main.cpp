#include "Span.hpp"

int main()
{
	Span *sp = new Span(5);
	try
	{
		sp->addNumber(6);
		sp->addNumber(3);
		sp->addNumber(17);
		sp->addNumber(9);
		sp->addNumber(11);
		sp->addNumber(9);
		sp->addNumber(11);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << sp->shortestSpan() << std::endl;
	std::cout << sp->longestSpan() << std::endl;
	
	delete sp;

	std::cout << "----" << std::endl;

	Span	span(100);

	try
	{
		span.addRandomNumber(101, 500);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		span.addNumber(101);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Span : ";
	span.printSpan();
	try
	{
		span.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		span.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "----" << std::endl;

	Span span_range_insert(10);
	std::vector<int> range_insert;
	range_insert.push_back(5);
	range_insert.push_back(9);
	range_insert.push_back(2);
	range_insert.push_back(6);
	try
	{
		span_range_insert.addWithIterator(range_insert);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Span : ";
	span_range_insert.printSpan();

	return 0;
}