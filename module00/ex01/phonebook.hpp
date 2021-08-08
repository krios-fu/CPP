/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krios-fu <krios-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 04:34:43 by krios-fu          #+#    #+#             */
/*   Updated: 2021/08/08 04:42:21 by krios-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <stdio.h>
#include <iomanip>

int		menu(std::string line);
void	addContact(Contact &contact);
void	print_contact(Contact contact);
void	search_display(Contact *contacts, int len);
void	print_format(std::string str);

#endif