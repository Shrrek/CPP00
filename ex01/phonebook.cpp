#include "phonebook.hpp"
#include <iostream>

Phonebook::Phonebook(){
	this->index = 0;
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
	this->index++;
	if (index == 8)
		index = 0;
}

void Phonebook::ft_search(void){


}