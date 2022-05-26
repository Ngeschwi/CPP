#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <climits>
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>

class Convert
{
	private :
		double		value;
		std::string	type;

	public :
		Convert();
		Convert(Convert const &src);

		Convert &	operator=(Convert const & rhs);

		double	getValue(void) const;
		void	setType(std::string type_arg);
		void	checkType(char *arg);
		void	parseArg(std::string arg);
		bool	parseInfNanType(int i, std::string arg);
		void	printAllConvert(void) const;
		void	printChar(void) const;
		void	printInt(void) const;
		void	printFlaot(void) const;
		void	printDouble(void) const;

		~Convert(void);
};

class EmptyArg : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Error Argument : null";
		}
};
class NoNumericArg : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Error Argument : not a numeric argument";
		}
};

#endif