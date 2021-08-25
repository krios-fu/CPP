
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <stdio.h>
#include <iomanip>

class Phonebook
{
	private:
				Contact contact [8];
				int	_pos;
				int	_len;
	public:
				Phonebook();
				~Phonebook();
				int menu(std::string line);
				void addContact(void);
				int getLen() const;
				void print_contact(int pos);
				void search_display(int len);
				void print_format(std::string str);
};

#endif
