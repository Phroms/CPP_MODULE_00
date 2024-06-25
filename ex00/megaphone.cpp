/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:23:23 by agrimald          #+#    #+#             */
/*   Updated: 2024/06/13 17:03:36 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include <string>

std::string	capitalized_word(std::string word)
{
	for(int i = 0; i < word.length(); i++)
	{
		word[i] = std::toupper(word[i]);
	}
	return (word);
}
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; ++i)
		{
			std::string word = argv[i];
			std::cout<<capitalized_word(word);
			if (i < argc - 1)
				std::cout<< " ";
		}
	}
	else
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	return (0);
}
