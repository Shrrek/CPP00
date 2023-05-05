/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperales <jperales@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:16:58 by jperales          #+#    #+#             */
/*   Updated: 2023/05/03 13:17:01 by jperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

Phonebook::Phonebook(){
	this->index = 0;
	this->nbr_contacts = 0;
}

Phonebook::~Phonebook(){
}

void Phonebook::ft_add(void){
	std::string fst;
	std::string last;
	std::string nick;
	std::string numb;
	std::string secre;

	std::cout<<"Insert the new Contact´s data: "<<std::endl;
	std::cout<<"Insert the First Name: "<<std::endl;
	std::cin>>fst;
	this->contacts[index].setFirstName(fst);
	std::cout<<"Insert the Last Name: "<<std::endl;
	std::cin>>last;
	this->contacts[index].setLastName(last);
	std::cout<<"Insert the NickName: "<<std::endl;
	std::cin>>nick;
	this->contacts[index].setNickName(nick);
	std::cout<<"Insert the Phone Number: "<<std::endl;
	std::cin>>numb;
	this->contacts[index].setPhoneNumber(numb);
	std::cout<<"Insert the Darkest Secret: "<<std::endl;
	std::cin>>secre;
	this->contacts[index].setDarkestSecret(secre);

	//Contact contactNew(fst, last, nick, numb, secre);
	//std::cout<<contactNew.getFirstName()<<std::endl;
	//contactNew.setFirstName("Perales");
	//std::cout<<contactNew.getFirstName()<<std::endl;
	if (this->nbr_contacts != 8)
		this->nbr_contacts++;
	this->index++;
	if (this->index == 8)
		index = 0;
}

void Phonebook::ft_search(void){
	int i = 0;

	if (nbr_contacts == 0)
	{
		std::cout<<"There are no contacts to search."<<std::endl;
		return;
	}
	for (int i = 0; i < nbr_contacts; i++){
//		std::cout.fill(' ');
//		std::cout.width(10);
		std::cout<<std::setfill(' ')<<std::setw(10)<<i + 1<<" | ";
		contacts[i].ft_PrintContact();

	}
	std::cout<<"Select a index of the contact: ";
	std::cin>>i;
	if (std::cin.fail()) {
		std::cout << "Error: not valid input." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
		return ;
	}
	if (i < 1 || i > nbr_contacts)
	{
		std::cout<<"Wrong contact. Select a contact between 1 and "<<index<<"."<<std::endl;
		ft_search();
	}
	else
		contacts[i - 1].ft_ShowContact();
}