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
	/*
	contend->firstName = funcion2("First Name: ");
	contend->lastName = funcion2("Last Name: ");
	contend->nickName = funcion2("Nick Name: "):
	contend->phoneNumber = funcion2("Phone Number: ");
	contend->darkestSecret = funcion2("Darkest Secret: ");
	*/
std::cout << "First Name: " << contend->variable_value(contend, "firstName") << std::endl;
std::cout << "Last Name: " << contend->variable_value(contend, "lastName") << std::endl;
std::cout << "Nick Name: " << contend->variable_value(contend, "nickName") << std::endl;
std::cout << "Phone Number: " << contend->variable_value(contend, "phoneNumber") << std::endl;
std::cout << "Darkest Secret: " << contend->variable_value(contend, "darkestSecret") << std::endl;
}

void	Data::set_firstname(std::string name)
{
	this->firstName = name;
}
void	Data::set_lastname(std::string last)
{
	this->lastName = last;
}
void	Data::set_nickname(std::string nick)
{
	this->nickName = nick;
}
void	Data::set_phonenumber(std::string number)
{
	this->phoneNumber = number;
}
void	Data::set_darkestsecret(std::string secret)
{
	this->darkestSecret = secret;
}
	

Data::~Data()
{
}
