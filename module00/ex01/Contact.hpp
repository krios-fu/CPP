#ifndef CONTAC_HPP
# define CONTAC_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string nickName;
		std::string phone;
		std::string darkSecret;
	public:
		Contact();
		virtual ~Contact();
		/* set */
		
		void	set_fName(void);
		void	set_lName(void);
		void	set_nickName(void);
		void	set_phone(void);
		void	set_darkSecret(void);
		
		 /* get */
		 
		std::string	get_fName(void);
		std::string	get_lName(void);
		std::string	get_nickName(void);
		std::string	get_phone(void);
		std::string	get_darkSecret(void);
};

#endif