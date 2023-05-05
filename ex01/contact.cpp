/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperales <jperales@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:15:44 by jperales          #+#    #+#             */
/*   Updated: 2023/05/03 13:15:48 by jperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

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
	std::cout.fill(' ');
	std::cout.width(10);
	std::cout<<ft_CheckString(this->first_name)<<"|";
	std::cout.fill(' ');
	std::cout.width(10);
	std::cout<<ft_CheckString(this->last_name)<<"|";
	std::cout.fill(' ');
	std::cout.width(10);
	std::cout<< ft_CheckString(this->nickname)<<std::endl;

}

void Contact::ft_ShowContact(){
	std::cout<<"First name:     "<<this->first_name<<std::endl;
	std::cout<<"Last name:      "<<this->last_name<<std::endl;
	std::cout<<"Nickname:       "<<this->nickname<<std::endl;
	std::cout<<"Phone number:   "<<this->phone_number<<std::endl;
	std::cout<<"Darkest secret: "<<this->darkest_secret<<std::endl;
}

std::string Contact::ft_CheckString(std::string str){
	if (str.length() > 9)
	{
		str = str.substr(0,9);
		str.append(1,'.');
	}
	return (str);
}