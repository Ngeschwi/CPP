#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <stdlib.h>
# include <time.h>

class	Span
{
	private :
		unsigned int 		N;
		std::vector<int>	_span;
	
	public :
		Span(unsigned int N);
		Span(Span const & src);

		Span &	operator=(Span const & rhs);

		unsigned int		getN(void) const;
		std::vector<int>	getSpan(void) const;
		void				printSpan(void) ;
		void				addNumber(int to_append);
		void				addRandomNumber(int max_to_append, int max);
		void				addWithIterator(std::vector<int> range_insert);
		int					shortestSpan(void);
		int					longestSpan(void);

		~Span(void);
};

class SpanFull : public std::exception
{
	public :
		virtual const char* what() const throw()
		{
			return "The span is full";
		}
};
class DistanceCantBeCalculated : public std::exception
{
	public :
		virtual const char* what() const throw()
		{
			return "The distance cant be calculated";
		}
};

#endif