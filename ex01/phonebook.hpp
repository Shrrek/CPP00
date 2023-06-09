/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperales <jperales@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:36:59 by jperales          #+#    #+#             */
/*   Updated: 2023/05/03 13:17:26 by jperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <string.h>

class Phonebook{
	private:
		int	index;
		int nbr_contacts;
		Contact contacts[8];
		
	public:
		Phonebook(void);
		~Phonebook();
		void ft_add(void);
		void ft_search(void);
};
#endif
