/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:23:23 by agrimald          #+#    #+#             */
/*   Updated: 2024/06/07 20:01:40 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

string	capitalized_word(string word)
{
	for(int i = 0; i < word.length(); i++)
	{
		word[i] = toupper(word[i]);
	}
	return (word);
}
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; ++i)
		{
			string word = argv[i];
			cout<<capitalized_word(word);
			if (i < argc - 1)
				cout<< " ";
		}
	}
	else
		cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<endl;
	return (0);
}
