# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/07 16:11:24 by agrimald          #+#    #+#              #
#    Updated: 2024/06/07 19:15:34 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CPP = c++
CPP_FLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRC = megaphone.cpp

OBJECTS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "Compiling successfy!!!!\n"
	$(CPP) $(CPP_FLAGS) -o $(NAME) $(OBJECTS)

fclean: clean
		$(RM) $(NAME)

clean:
		$(RM) $(OBJECTS)

re: fclean all

.PHONY: all clean fclean re
