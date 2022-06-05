#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

static int i = 0;

Base *	generate(void)
{
	srand (time(NULL));
	int	nbr_rand = rand() % 3;

	switch(nbr_rand)
	{
		case 0 :
			// std::cout << "generate : A" << std::endl;
			return new A();
		case 1 :
			// std::cout << "generate : B" << std::endl;
			return new B();
		default :
			// std::cout << "generate : C" << std::endl;
			return new C();
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "PNT_Type : A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "PNT_Type : B" << std::endl;
	else
		std::cout << "PNT_Type : C" << std::endl;
}

void	identify(Base& p)
{
	char type[3] = {'A', 'B', 'C'};
	void	*foo = NULL;
	Base &base_test = (Base &)foo;
	
	try
	{
		switch (i)
		{
			case 0 :
				base_test = dynamic_cast<A &>(p);
				break;
			case 1 :
				base_test = dynamic_cast<B &>(p);
				break;
			case 2 :
				base_test = dynamic_cast<C &>(p);
				break;
		}
	}
	catch (std::exception &e)
	{
		i++;
		identify(p);
		return ;
	}
	std::cout << "REF_Type : " << type[i] << std::endl;
}

int	main()
{
	Base *which_base = generate();

	identify(which_base);
	identify(*which_base);

	delete which_base;

	return 0;
}