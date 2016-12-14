# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: talemari <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 15:17:33 by talemari          #+#    #+#              #
#    Updated: 2016/11/13 13:59:47 by talemari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(shell ls | grep \\.c)$
HEADER = libft.h
OBJ = $(SRC:.c=.o)
NAME = libft.a
CFLAGS += -Wall -Wextra -Werror
all : $(NAME)
$(NAME) : $(OBJ)
	ar rcs $(NAME) $^
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all
go : all clean
.PHONY : go re fclean clean all
