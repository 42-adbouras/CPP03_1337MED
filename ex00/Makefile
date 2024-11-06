# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adbouras <adbouras@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 17:43:43 by adbouras          #+#    #+#              #
#    Updated: 2024/11/05 17:54:43 by adbouras         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GRN		= \033[1;92m
YLW		= \033[1;93m
RED		= \033[1;91m
CYN		= \033[1;96m
RST		= \033[0;39m
CLN		= \033[K\r\c

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

NAME	= clapTrap

SRC		= ClapTrap.cpp main.cpp

NCLD	= ClapTrap.hpp

OBJ_DIR = objects/

OBJ		= $(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

all: $(NAME)

$(OBJ_DIR)%.o:%.cpp $(NCLD)
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
	