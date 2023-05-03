#include "contact.hpp"
#include <iostream>
#include <string>

Contact::Contact(){

}

/*Contact::Contact(std::string fst, std::string last, std::string nick, std::string numb, std::string secre){
	this->first_name = fst;
	this->last_name = last;
	this->nickname = nick;
	this->phone_number = numb;
	this->darkest_secret = secre;
}*/

Contact::~Contact(){
}

std::string	Contact::getFirstName(void) const
{
	return (this->first_name);
}

void Contact::setFirstName(std::string fst)
{
	this->first_name = fst;
}

std::string	Contact::getLastName(void) const
{
	return (this->last_name);
}

void Contact::setLastName(std::string last)
{
	this->last_name = last;
}

std::string	Contact::getNickName(void) const
{
	return (this->nickname);
}

void Contact::setNickName(std::string nick)
{
	this->nickname = nick;
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->phone_number);
}

void Contact::setPhoneNumber(std::string numb)
{
	this->phone_number = numb;
}
std::string	Contact::getDarkestSecret(void) const
{
	return (this->darkest_secret);
}

void Contact::setDarkestSecret(std::string secre)
{
	this->darkest_secret = secre;
}

void Contact::ft_PrintContact(){
	std::cout<<this->first_name<<" | ";
	std::cout<<this->last_name<<" | ";
	std::cout<<this->nickname<<std::endl;

}