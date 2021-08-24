
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <stdio.h>
#include <iomanip>

class Phonebook
{
	private:

	Contact contact [8];
	int	pos;
	public:
		Phonebook();
		virtual ~Phonebook();
		int menu(std::string line);
		void addContact(void);
		void print_contact(int pos);
		void search_display(int len);
		void print_format(std::string str);
};

#endif
