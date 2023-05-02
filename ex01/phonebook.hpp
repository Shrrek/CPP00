/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperales <jperales@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:36:59 by jperales          #+#    #+#             */
/*   Updated: 2023/05/02 11:37:13 by jperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook{
	private:
		int	i;
		Contact contacts[8];
		
	public:
		Phonebook(int, Contact);
		~Phonebook();
		void ft_add(Contact contacts);
		void ft_search(int index);
};

#endif