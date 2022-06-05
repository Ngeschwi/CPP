#include "Convert.hpp"

Convert::Convert() : value(0.0), type("")
{
	std::cout << "Default Constructor Convert call" << std::endl;
	return ;
}

Convert::Convert(Convert const & src)
{
	std::cout << "Copy Constructor Convert call" << std::endl;
	*this = src;
	return ;
}

Convert &	Convert::operator=(Convert const & rhs)
{
	std::cout << "Assign Constructor Convert call" << std::endl;
	if (this != &rhs)
		this->value = rhs.getValue();
	return *this;
}

double	Convert::getValue(void) const
{
	return this->value;
}

void	Convert::setType(std::string type_arg)
{
	this->type = type_arg;
	return ;
}

void	Convert::checkType(char *arg)
{
	this->parseArg(arg);
	if (this->type.compare("char") == 0)
		this->value = static_cast<int>(*arg);
	else
		sscanf(arg, "%lf", &(this->value));
	return ;
}

void	Convert::parseArg(std::string arg)
{
	int	i = 0;
	int	dot = 0;
	int	f = 0;

	if (arg.empty())
		throw EmptyArg();
	if (!arg[1] && isprint(arg[0]) && !isdigit(arg[0]))
	{
		this->setType("char");
		return ;
	}
	if (arg[0] == '-' || arg[0] == '+')
		i++;
	if (this->parseInfNanType(i, arg))
		return ;
	while (arg[i])
	{
		if (arg[i] == '.')
			dot++;
		else if (arg[i] == 'f')
			f++;
		if (dot > 1 || f > 1 || (!isdigit(arg[i]) && arg[i] != 'f' && arg[i] != '.'))
			throw NoNumericArg();
		i++;
	}
	if (f == 1 && arg[i - 1] != 'f')
		throw NoNumericArg();
	// if (arg[i - 1] == '.')
	// {
	// 	arg = arg.substr(0, arg.size() - 1);
	// 	this->setType("int");
	// 	return ;
	// }
	if (dot == 0 & f == 0)
		this->setType("int");
	else if (f == 0)
		this->setType("double");
	else
		this->setType("float");
	return ;
}

bool	Convert::parseInfNanType(int i, std::string arg)
{
	std::string	sub_arg = arg.substr(i);
	if (sub_arg.compare("inf") == 0 || sub_arg.compare("nan") == 0)
	{
		this->setType("double");
		return true;
	}
	else if (sub_arg.compare("inff") == 0 || sub_arg.compare("nanf") == 0)
	{
		this->setType("float");
		return true;
	}
	else
		return false;
}

void	Convert::printAllConvert(void) const
{
	std::cout << "The argument is : " << this->type << std::endl;
	this->printChar();
	this->printInt();
	this->printFlaot();
	this->printDouble();
}

void	Convert::printChar(void) const
{
	std::cout << "char : ";
	if (this->value < 0 || this->value > 127 || this->value != this->value)
		std::cout << "impossible" << std::endl;
	else if (this->value < 36 || this->value > 126)
		std::cout << "not printable" << std::endl;
	else
		std::cout << static_cast<char>(this->value) << std::endl;
}

void	Convert::printInt(void) const
{
	std::cout << "int : ";
	if (this->value > INT_MAX || this->value < INT_MIN || this->value != this->value)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(this->value) << std::endl;
}

void	Convert::printFlaot(void) const
{
	std::cout << "float : " << static_cast<float>(this->value);
	if (static_cast<float>(this->value) - static_cast<int>(this->value) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void	Convert::printDouble(void) const
{
	std::cout << "double : " << static_cast<double>(this->value);
	if (static_cast<double>(this->value) - static_cast<int>(this->value) == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

Convert::~Convert(void)
{
	std::cout << "Destructor Convert call" << std::endl;
}