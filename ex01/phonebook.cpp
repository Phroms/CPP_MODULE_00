/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:13:41 by agrimald          #+#    #+#             */
/*   Updated: 2024/06/20 18:13:42 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

Phonebook::Phonebook()
{
}

void    Phonebook::max_contacts(Data *contact)
{
    if (size_phonebook == 8 || !size_phonebook)
        size_phonebook = 0;
    contact->print_contact(&cont[size_phonebook]);
    size_phonebook++;
}

void    Phonebook::show_contact(Phonebook *book)
{
    std::string str;

    for (i = 0; i < 8; i++;)
    {
        str =book->cont[i].Getvalue(&book->cont[i], "firstName");
        if (str.length() < 1)
            break;
      std::cout << std::setw(10) << std::right << i << "| ";
      if (str.lenght() > 10)
            str = str.substr(0, 9) + ".";
    }
}

void    Phonebook::init_progran(int value)
{
    size_phonebook =  value;
}

Phonebook::~Phonebook()
{
}
