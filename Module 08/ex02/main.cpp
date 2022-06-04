#include "Mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;

	std::cout << "---With MutanStack---" << std::endl;

	mstack.push(5);
	mstack.push(17);
	std::cout << "size : " << mstack.size() << std::endl;
	std::cout << "top : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size : " << mstack.size() << std::endl;
	std::cout << "---" << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(42);
	mstack.push(0);

	MutantStack<int>::iterator it_begin = mstack.begin();
	MutantStack<int>::iterator it_end = mstack.end();

	it_begin++;
	it_begin--;
	std::cout << "size: " << mstack.size() << std::endl;
	while (it_begin != it_end)
	{
		std::cout << *it_begin << std::endl;
		++it_begin;
	}

	// std::cout << "---With a list---" << std::endl;

	// std::list<int> mstack_list;

	// mstack_list.push_back(5);
	// mstack_list.push_back(17);
	// std::cout << "size : " << mstack_list.size() << std::endl;
	// std::cout << "top : " << mstack_list.back() << std::endl;
	// mstack_list.pop_back();
	// std::cout << "size : " << mstack_list.size() << std::endl;
	// std::cout << "---" << std::endl;

	// mstack_list.push_back(3);
	// mstack_list.push_back(5);
	// mstack_list.push_back(737);
	// mstack_list.push_back(42);
	// mstack_list.push_back(0);

	// std::cout << "size: " << mstack_list.size() << std::endl;
	// for (std::list<int>::iterator it = mstack_list.begin() ; it != mstack_list.end(); ++it)
	// 	std::cout << *it << std::endl;

	return 0;
}