/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperales <jperales@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 09:10:37 by jperales          #+#    #+#             */
/*   Updated: 2023/05/02 09:10:42 by jperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int	main(int argc, char **argv){
	char *ptr;
	
	if (argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else{
		for (int i = 1; i < argc; i++){
			for (int j = 0; argv[i][j]; j++)
				argv[i][j] = toupper(argv[i][j]);
			std::cout<<argv[i]<<" ";
		}
	}
	std::cout<<std::endl;
	return 0;
}
