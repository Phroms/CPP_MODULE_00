# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 19:29:35 by agrimald          #+#    #+#              #
#    Updated: 2024/06/13 20:14:39 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook
CPP = g++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRC = contact.cpp phonebook.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		@echo "Compiling successfly!!!\n"
		$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJECTS)

fclean: clean
		$(RM) $(NAME)

clean:
		$(RM) $(OBJECTS)

re: fclean all

.PHONY: all clean fclean re
