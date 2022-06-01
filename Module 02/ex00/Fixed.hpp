#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					nbr;
		const static int	nbr_bits = 8;

	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &	operator=(Fixed const & rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif