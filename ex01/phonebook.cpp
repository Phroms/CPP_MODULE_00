/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:29:56 by agrimald          #+#    #+#             */
/*   Updated: 2024/06/13 20:15:58 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

MyClass::MyClass() : setPerso(""), setNumber("") {}

// Parameterized constructor
MyClass::MyClass(std::string perso, std::string number) : setPerso(perso), setNumber(number) {}

// Copy constructor
MyClass::MyClass(const MyClass& other) {
    setPerso = other.setPerso;
    setNumber = other.setNumber;
}

// Getter for setPerso
std::string MyClass::getSetPerso() {
    return setPerso;
}

// Getter for setNumber
std::string MyClass::getSetNumber() {
    return setNumber;
}

bool MyClass::SetPerso(std::string name)
{
	if (name == "")
		return (false);
	char c = name[0];
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (false);
	setPerso = name;
	return (true);
}

int main(int argc, char **argv)
{
	if (argc < 1)
	{
		std::string name = argv[1];
		MyClass obj;
		if (obj.SetPerso(name))
			std::cout <<"Name: "<<obj.getSetPerso() << std::endl;
	}
	return (0);
}
