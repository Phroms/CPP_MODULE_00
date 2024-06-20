/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:03:34 by agrimald          #+#    #+#             */
/*   Updated: 2024/06/17 19:13:54 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <stdlib.h>
# include <string>

class Data
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		Data();
		~Data();
		std::string variable_value(Data *contact, std::string value);
		std::string show_msg(std::string printmsg);
		void	print_arguments(Data *contend);
		void	set_firstname(std::string name);
		void	set_lastname(std::string last);
		void	set_nickname(std::string nick);
		void	set_phonenumber(std::string number);
		void	set_darkestsecret(std::string secret);
		/*std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkestSecret();*/
};
#endif
