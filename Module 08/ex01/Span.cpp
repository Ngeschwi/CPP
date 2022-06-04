#include "Span.hpp"

Span::Span(unsigned int N) : N(N)
{
	std::cout << "Constructor Span call" << std::endl;
	return ;
}

Span::Span(Span const & src)
{
	*this = src;
	return ;
}

Span &	Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		this->N = rhs.getN();
		this->_span = rhs.getSpan();
	}
	return *this;
}

unsigned int	Span::getN(void) const
{
	return this->N;
}

std::vector<int>	Span::getSpan(void) const
{
	return this->_span;
}

void	Span::printSpan(void)
{
	for (std::vector<int>::iterator it = this->_span.begin() ; it != this->_span.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	return ;
}

void	Span::addNumber(int to_append)
{
	if (this->_span.size() >= this->N)
		throw SpanFull();
	else
		this->_span.push_back(to_append);
}

void	Span::addRandomNumber(int max_to_append, int max)
{
	srand (time(NULL));
	for (int i = 0; i < max_to_append; i++)
		this->addNumber(rand() % max);
	return ;
}

void	Span::addWithIterator(std::vector<int> range_insert)
{
	std::vector<int>::iterator it;

	if (range_insert.size() + this->_span.size() > this-> N)
		throw SpanFull();
	else
	{
		it = this->_span.begin();
		this->_span.insert(it, range_insert.begin(), range_insert.end());
	}
}

int	Span::shortestSpan(void)
{
	int	save;
	int	save_up;
	int	save_down;

	if (this->_span.size() <= 1)
		throw DistanceCantBeCalculated();
	else
	{
		sort(this->_span.begin(), this->_span.end());
		save = *(this->_span.begin()+1) - *(this->_span.begin());
		save_up = *(this->_span.begin()+1);
		save_down = *(this->_span.begin());
		for(std::vector<int>::iterator it = this->_span.begin() ; it != this->_span.end()-1; ++it)
		{
			if (*(it+1) - *it < save)
			{
				save = *(it+1) - *it;
				save_up = *(it+1);
				save_down = *it;
			}
		}
		std::cout << "Shortest distance : " << save << ", is beteewn : " << save_up << " and : " << save_down << std::endl;
		return save;
	}
}

int	Span::longestSpan(void)
{
	int	min;
	int	max;

	if (this->_span.size() <= 1)
		throw DistanceCantBeCalculated();
	else
	{
		sort(this->_span.begin(), this->_span.end());
		min = *(this->_span.begin());
		max = *(this->_span.end()-1);
		std::cout << "Longest distance : " << max - min << ", is beteewn : " << min << " and : " << max << std::endl;
		return max - min;
	}
}

Span::~Span(void)
{
	std::cout << "Destructor Span call" << std::endl;
	return ;
}