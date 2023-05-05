/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperales <jperales@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:35:24 by jperales          #+#    #+#             */
/*   Updated: 2023/05/03 13:16:37 by jperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

int main (){
	std::string choice[] = {"ADD", "SEARCH", "EXIT"};
	int			i = 0;
	std::string	option;
	//Contact		contacts[8];
	Phonebook	reg;



	while (1)
	{
		std::cout<<std::endl;	
		std::cout<<"Select an option please: "<<std::endl;
		std::cout<<std::endl;
		std::cout<<"1.- ADD "<<std::endl;
		std::cout<<std::endl;
		std::cout<<"2.- SEARCH "<<std::endl;
		std::cout<<std::endl;
		std::cout<<"3.- EXIT "<<std::endl;
		std::cout<<std::endl;
		std::cout<<"Your option : ";
		std::cin>>option;
		while (option != choice[i] && i < 3)
			i++;
		//std::cout<<i<<std::endl;
		switch (i){
		case 0:
			reg.ft_add();break;
		case 1:
			reg.ft_search();break;
		case 2:
			return (0);
		case 3:
			std::cout<<"Not a valid option, try again."<<std::endl;
			break;
		}
		i = 0;
	}
	return (0);
}
