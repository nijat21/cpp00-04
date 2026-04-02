#include "contact.hpp"

void Contact::set_first_name(std::string str)
{
	first_name=str;
}

void Contact::set_last_name(std::string str)
{
	last_name=str;
}

void Contact::set_nickname(std::string str)
{
	nickname=str;
}

void Contact::set_phone_number(std::string str)
{
	phone_number=str;
}

void Contact::set_darkest_secret(std::string str)
{
	darkest_secret=str;
}

void Contact::add(ContactInput c)
{
	if(!(c->first_name && c->last_name && c->nickname && c->phone_number && c->darkest_secret)) 
		return;
	set_first_name(c->first_name);	
	set_first_name(c->last_name);	
	set_first_name(c->nickname);	
	set_first_name(c->phone_number);	
	set_first_name(c->darkest_secret);	
}

