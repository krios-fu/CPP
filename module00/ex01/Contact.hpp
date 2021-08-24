#ifndef CONTAC_HPP
# define CONTAC_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string _f_name;
		std::string _l_name;
		std::string _nickName;
		std::string _phone;
		std::string _darkSecret;
	public:
		Contact();
		virtual ~Contact();

		/* set */
		
		void	set_fName(std::string f_name);
		void	set_lName(std::string l_name);
		void	set_nickName(std::string nickName);
		void	set_phone(std::string phone);
		void	set_darkSecret(std::string darkSecret);
		void	setInfo();

		 /* get */

		std::string	get_fName(void);
		std::string	get_lName(void);
		std::string	get_nickName(void);
		std::string	get_phone(void);
		std::string	get_darkSecret(void);
};

#endif