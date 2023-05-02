#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact{
	private:
		std::string first_name;
		std::string nickname;
		int			phone_number;
		std::string	darkest_secret;
		int			index;

	public:
		Contact(std::string, std::string, int, std::string, int);
		~Contact();
	};

#endif