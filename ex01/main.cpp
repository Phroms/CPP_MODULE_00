/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:55:12 by agrimald          #+#    #+#             */
/*   Updated: 2024/06/20 18:55:14 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"
#include "contact.h"

int main()
{
	std::string	input;
	Phonebook	phoneboook;
	Data		contact;

	phoneboook.init_program(0);
	std::cout << "Write ADD, SEARCH o EXIT" << std::endl;
	while (true)
	{
		if (!getline(std::cin, input))
		{
			if(std::cin.eof())
			{
				std::cout << "Input failure." << std::endl;
				break;
			}
		}
		if (input == "EXIT")
			return (0);
		else if (input == "ADD")
			phoneboook.add(&contact);
		else if (input == "SEARCH")
		{
			phoneboook.show_contact(&phoneboook);
			phoneboook.search(&phoneboook);
		}
		std::cout << "Write ADD, SEARCH o EXIT" << std::endl;
	}
	return (0);
}
