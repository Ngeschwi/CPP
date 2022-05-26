#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <stdio.h>
# include <stdlib.h>
# include "Contact.hpp"

class Phonebook
{
	public:

		Phonebook(int nbr);
		~Phonebook(void);

		void	make_add(void);
		void	ask_info_add_contact(void);

		void	make_search(void);
		void	print_all_contact_col(void) const;
		void	print_info_contact_col(std::string info_to_print) const;
		void	print_the_contact(int index) const;

	private:

		Contact contact[8];
		int		nbr_contact;
		int		index;
};

#endif