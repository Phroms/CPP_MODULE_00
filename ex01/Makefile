# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 19:29:35 by agrimald          #+#    #+#              #
#    Updated: 2024/06/25 20:10:29 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook
CPP = g++
CPPFLAGS = -Wall -Werror -Wextra -g -fsanitize=address -std=c++98
RM = rm -rf

SRC = main.cpp contact.cpp phonebook.cpp

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
