/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:06:04 by agrimald          #+#    #+#             */
/*   Updated: 2024/06/20 18:06:10 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.h"

Data::Data()
{
}

std::string Data::variable_value(Data *contact, std::string value)
{
	if (value == "firstName")
		return (contact->firstName);
	else if (value == "lastName")
		return (contact->lastName);
	else if (value == "nickName")
		return (contact->nickName);
	else if (value == "phoneNumber")
		return (contact->phoneNumber);
	else if (value == "darkestSecret")
		return (contact->darkestSecret);
	return ("");
}

std::string Data::show_msg(std::string printmsg)
{
	std::string print;

	std::cout<< printmsg;
	while (print.length() < 1)
	{
		if (!getline(std::cin, print))
		{
			std::cout<<"The input rejected it " <<std::endl;
			exit(0);
		}
	}
	return (print);
}

void	Data::print_contact(Data *contend)
{
	contend->firstName = show_msg("First Name: ");
	contend->lastName = show_msg("Last Name: ");
	contend->nickName = show_msg("Nick Name: ");
	contend->phoneNumber = show_msg("Phone Number: ");
	contend->darkestSecret = show_msg("Darkest Secret: ");
}

Data::~Data()
{
}
