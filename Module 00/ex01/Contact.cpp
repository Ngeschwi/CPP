#include "Phonebook.hpp"

Contact::Contact(void)
{
	return ;
}

std::string	Contact::get_first_name(void) const
{
	return this->first_name;
}
std::string	Contact::get_last_name(void) const
{
	return this->last_name;
}
std::string	Contact::get_nickname(void) const
{
	return this->nickname;
}
std::string	Contact::get_phone(void) const
{
	return this->phone_number;
}
std::string	Contact::get_secret(void) const
{
	return this->darkest_secret;
}

void	Contact::set_first_name(std::string name)
{
	this->first_name = name;
	return ;
}
void	Contact::set_last_name(std::string name)
{
	this->last_name = name;
	return ;
}
void	Contact::set_nickname(std::string name)
{
	this->nickname = name;
	return ;
}
void	Contact::set_phone(std::string phone)
{
	this->phone_number = phone;
	return ;
}
void	Contact::set_secret(std::string secret)
{
	this->darkest_secret = secret;
	return ;
}

Contact::~Contact(void)
{
	return ;
}