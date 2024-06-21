/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:13:55 by agrimald          #+#    #+#             */
/*   Updated: 2024/06/20 18:14:20 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <stdlib.h>
# include <string>

#include "contact.h"

class Phonebook
{
    private:
        Data  cont[8];
        int size_phonebook;
    public:
        Phonebook();
        ~Phonebook();
        void    max_contacts(Data *contact);
};
#endif
