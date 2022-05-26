#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <stdio.h>
# include <stdlib.h>
# include "Phonebook.hpp"

class Contact
{
	public:

		Contact(void);
		~Contact(void);

		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_phone(void) const;
		std::string	get_secret(void) const;

		void	set_first_name(std::string name);
		void	set_last_name(std::string name);
		void	set_nickname(std::string name);
		void	set_phone(std::string phone);
		void	set_secret(std::string secret);

	private:

		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif