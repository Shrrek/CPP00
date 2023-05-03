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
		Contact(std::string fst, std::string last, std::string nick, std::string numb, std::string secre);
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
	};

#endif