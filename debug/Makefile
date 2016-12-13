# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: talemari <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 15:17:33 by talemari          #+#    #+#              #
#    Updated: 2016/12/12 18:43:34 by talemari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(shell ls | grep \\.c)$
OBJ = $(SRC:.c=.o)
LIB = libft.a
NAME = debug.a
CFLAGS += -Wall -Wextra -Werror
all : $(NAME) $(LIB)
$(NAME) : $(OBJ)
	ar rcs $(NAME) $^
$(LIB) :
	cd libft/ && make
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
supclean : fclean
	cd libft/ && make fclean
re : fclean all
go : all clean
.PHONY : go re fclean clean all
