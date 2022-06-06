#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

class BadIndex : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Error : bad index";
		}
};

template <class T>
class Array
{
	private :
		int	_size;
		T *_array;

	public :
		Array(void);
		Array(unsigned int n);
		Array(const Array<T> &src);
		
		Array<T> &	operator=(const Array<T> &rhs);
		T &	operator[](const int index) const;

		int	size(void) const;

		~Array(void);
};

template <class T>
Array<T>::Array(void) : _size(0), _array(nullptr)
{
	std::cout << "Default Constructor Array call" << std::endl;
	return ;
}

template <class T>
Array<T>::Array(unsigned int n) : _size(n)
{
	std::cout << "Constructor Array call" << std::endl;
	this->_array = new T[n];
	for(unsigned int i = 0; i < n; i++)
		this->_array[i] = i;
	return ;
}

template <class T>
Array<T>::Array(const Array<T> &src)
{
	std::cout << "Copy Constructor Array call" << std::endl;
	*this = src;
	return ;
}

template <class T>
Array<T> &	Array<T>::operator=(const Array<T> &rhs)
{
	std::cout << "Assign Constructor Array call" << std::endl;
	if (this != &rhs)
	{
		this->_size = rhs.size();
		this->_array = new T[_size];
		for(int i = 0; i < _size; i++)
			this->_array[i] = i;
	}
	return *this;
}

template <class T>
T &	Array<T>::operator[](const int index) const
{
	if (index < 0 || index >= this->_size)
		throw BadIndex();
	return this->_array[index];
}

template <class T>
int	Array<T>::size(void) const
{
	return this->_size;
}

template <class T>
Array<T>::~Array(void)
{
	std::cout << "Destructor Array call" << std::endl;
	delete this->_array;
	return ;
}

#endif