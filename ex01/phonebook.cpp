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

void    max_contacts(const std::string& contact)
{
    if (size_phonebook == 8)
    {
        for (int i = 0; i < 7; ++i)
            contacts[i] = contacts[i + 1];
        size_phonebook--;
    }
    contacts[size_phonebook] = contact;
    size_phonebook++;
}

Phonebook::~Phonebook()
{
}