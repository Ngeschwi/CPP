#include "Phonebook.hpp"

Phonebook::Phonebook(int nbr) : nbr_contact(nbr), index(nbr)
{
	return ;
}

void	Phonebook::make_add(void)
{
	std::string	buff;

	if (this->nbr_contact == 8)
	{
		do
		{
			std::cout << "The phonebook is full, do you want to repmlace the oldest contact : yes or no" << std::endl;
			std::getline(std::cin, buff);
			if (std::cin.eof())
				exit(0);
		}
		while (buff.compare("yes") != 0 && buff.compare("no") != 0);
		if (buff.compare("no") == 0)
			return ;
		if (index > 7)
			this->index = 0;
	}
	else
		this->nbr_contact++;
	this->ask_info_add_contact();
	this->index++;
}

void	Phonebook::ask_info_add_contact(void)
{
	std::string	buff;

	std::cout << "First name :" << std::endl;
	std::getline(std::cin, buff);
	if (std::cin.eof())
		exit(0);
	contact[this->index].set_first_name(buff);
	std::cout << "Last name :" << std::endl;
	std::getline(std::cin, buff);
	if (std::cin.eof())
		exit(0);
	contact[this->index].set_last_name(buff);
	std::cout << "Nickname:" << std::endl;
	std::getline(std::cin, buff);
	if (std::cin.eof())
		exit(0);
	contact[this->index].set_nickname(buff);
	std::cout << "Phone number:" << std::endl;
	std::getline(std::cin, buff);
	if (std::cin.eof())
		exit(0);
	contact[this->index].set_phone(buff);
	std::cout << "Darkest secret :" << std::endl;
	std::getline(std::cin, buff);
	if (std::cin.eof())
		exit(0);
	contact[this->index].set_secret(buff);
}

void	Phonebook::make_search(void)
{
	std::string	buff;
	int			index;

	if (this->nbr_contact == 0)
	{
		std::cout << "Please enter a contact before searching" << std::endl << std::endl;
		return ;
	}
	std::cout << "Index     |First name|Last name |Nickname  |" << std::endl;
	this->print_all_contact_col();
	do
	{
		std::cout << "Please enter an index to see his informations" << std::endl;
		std::getline(std::cin, buff);
		if (std::cin.eof())
			exit(0);
		if (buff.size() != 1)
			index = -1;
		else if (buff[0] >= 48 && buff[0] <= 57)
			index = atoi(buff.c_str());
		else 
			index = -1;
	}
	while (index > (this->nbr_contact - 1) || index < 0);
	this->print_the_contact(index);
}

void	Phonebook::print_all_contact_col(void) const
{
	int	index_contact_to_print = 0;

	while (index_contact_to_print < this->nbr_contact)
	{
		std::cout << index_contact_to_print << "         |";
		this->print_info_contact_col(contact[index_contact_to_print].get_first_name());
		this->print_info_contact_col(contact[index_contact_to_print].get_last_name());
		this->print_info_contact_col(contact[index_contact_to_print].get_nickname());
		std::cout << std::endl;
		index_contact_to_print++;
	}
}

void	Phonebook::print_info_contact_col(std::string info_to_print) const
{
	int	size = info_to_print.size();

	if (size < 10)
	{
		std::cout << info_to_print;
		std::cout << std::string("           ").substr(0, 10 - size);
	}
	else
	{
		std::cout << info_to_print.substr(0, 9);
		std::cout << ".";
	}
	std::cout << "|";
}

void	Phonebook::print_the_contact(int index) const
{
	std::cout << "First name :" << std::endl << contact[index].get_first_name() << std::endl;
	std::cout << "Last name :" << std::endl << contact[index].get_last_name() << std::endl;
	std::cout << "Nickname :" << std::endl << contact[index].get_nickname() << std::endl;
	std::cout << "Phone number :" << std::endl << contact[index].get_phone() << std::endl;
	std::cout << "Darkest secret :" << std::endl << contact[index].get_secret() << std::endl;
}

Phonebook::~Phonebook(void)
{
	return ;
}