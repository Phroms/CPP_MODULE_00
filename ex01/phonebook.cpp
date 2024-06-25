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

void    Phonebook::add(Data *contact)
{
    if (size_phonebook == 8 || !size_phonebook)
        size_phonebook = 0;
    contact->print_contact(&cont[size_phonebook]);
    size_phonebook++;
}

void    Phonebook::show_contact(Phonebook *book)
{
    std::string str;

    for (int i = 0; i < 8; i++)
    {
        str = book->cont[i].variable_value(&book->cont[i], "firstName");
        if (str.length() < 1)
            break;
        std::cout << std::setw(10) << std::right << i << "|";
        if (str.length() > 10)
            str = str.substr(0, 9) + ".";
        std::cout << std::setw(10) << std::right << str << "|";
        str = book->cont[i].variable_value(&book->cont[i], "lastName");
        if (str.length() > 10)
            str = str.substr(0, 9) + ".";
        std::cout << std::setw(10) << std::right << str << "|";
        str = book->cont[i].variable_value(&book->cont[i], "nickName");
        if (str.length() > 10)
            str = str.substr(0, 9) + ".";
        std::cout << std::setw(10) << std::right << str << "|";
        std::cout << std::endl;
    }
}

void    Phonebook::init_program(int value)
{
    size_phonebook =  value;
}

void    Phonebook::search(Phonebook *phone)
{
    std::string input;
    int   index;

    std::cout << "Write the order number of the searched contact: " << std::endl;
    while (input.length() < 1)
    {
        if (!getline(std::cin, input))
        {
            std::cout << "Input reject" << std::endl;
            exit(0);
        }
    }
    if (input.length() > 1 || !isdigit(input[0]))
    {
        std::cout << "Bad index" << std::endl;
        return ;
    }
    index = std::atoi(input.c_str());
    input = phone->cont[index].variable_value(&phone->cont[index], "firstName");
    if (input.length() < 1)
    {
        std::cout << "Contact not found" << std::endl;
        return ;
    }
    std::cout << "First Name: " << phone->cont[index].variable_value(&phone->cont[index], "firstName") << std::endl;
    std::cout << "Last Name: " << phone->cont[index].variable_value(&phone->cont[index], "lastName") << std::endl;
    std::cout << "Nick Name: " << phone->cont[index].variable_value(&phone->cont[index], "nickName") << std::endl;
    std::cout << "Phone Number: " << phone->cont[index].variable_value(&phone->cont[index], "phoneNumber") << std::endl;
    std::cout << "Darkest Secret: " << phone->cont[index].variable_value(&phone->cont[index], "darkestSecret") << std::endl;
}

Phonebook::~Phonebook()
{
}
