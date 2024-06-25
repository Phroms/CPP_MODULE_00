/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:06:20 by agrimald          #+#    #+#             */
/*   Updated: 2024/06/20 18:06:23 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <cstdlib>
# include <cstring>
# include <stdlib.h>
# include <iomanip>


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
		void	print_contact(Data *contend);
		void	set_firstname(std::string name);
		void	set_lastname(std::string last);
		void	set_nickname(std::string nick);
		void	set_phonenumber(std::string number);
		void	set_darkestsecret(std::string secret);
};
#endif
