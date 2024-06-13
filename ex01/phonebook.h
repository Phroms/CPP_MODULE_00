/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:07:06 by agrimald          #+#    #+#             */
/*   Updated: 2024/06/13 20:03:56 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <iostream>

class MyClass {
	std::string setPerso;
	std::string setNumber;
public:
	MyClass();
	MyClass(std::string, std::string);
	MyClass(const MyClass&);

	std::string getSetPerso();
	std::string getSetNumber();
	bool SetPerso(std::string);
	bool SetNumber(std::string);
};

#endif
