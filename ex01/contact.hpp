/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperales <jperales@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:16:02 by jperales          #+#    #+#             */
/*   Updated: 2023/05/03 13:16:06 by jperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact{
	private:
		std::string first_name;
		std::string last_name;		
		std::string nickname;
		std::string	phone_number;
		std::string	darkest_secret;

	public:
		Contact(void);
		//Contact(std::string fst, std::string last, std::string nick, std::string numb, std::string secre);
		~Contact(void);
		std::string	getFirstName(void) const;
		void setFirstName(std::string fst);
		std::string	getLastName(void) const;
		void setLastName(std::string last);
		std::string	getNickName(void) const;
		void setNickName(std::string nick);
		std::string	getPhoneNumber(void) const;
		void setPhoneNumber(std::string numb);
		std::string	getDarkestSecret(void) const;
		void setDarkestSecret(std::string secre);

		void ft_PrintContact(void);
		void ft_ShowContact(void);
		std::string ft_CheckString(std::string str);


	};

#endif
