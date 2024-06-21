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
	Data prueba;
	Phonebook  phonebook;

	init_program()
	prueba.set_firstname(prueba.show_msg("First Name: "));
	prueba.set_lastname(prueba.show_msg("Last Name: "));
	prueba.set_nickname(prueba.show_msg("Nick Name: "));
	prueba.set_phonenumber(prueba.show_msg("Phone Number: "));
	prueba.set_darkestsecret(prueba.show_msg("Darkest Secret: "));
	//print_contact(&prueba);
	//phonebook.max_contacts(prueba.variable_value(&prueba,  "firstname"));    
	return (0);
}