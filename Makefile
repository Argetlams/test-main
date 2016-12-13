# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: talemari <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 15:17:33 by talemari          #+#    #+#              #
#    Updated: 2016/12/13 14:09:27 by talemari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(shell ls | grep \\.c)$
HEADER = fdf.h debug/db__malloc.h debug/debug.h debug/libft/libft.h
LIB = debug/debug.a debug/libft/libft.a
OBJ = $(LIB)
NAME = fdf
CFLAGS += -Wall -Wextra -Werror
DLENGHT = 100
TTEXT = \nBEGIN TEST :\n
all : $(NAME)
$(NAME) : $(OBJ) $(SRC) $(LIB)
	cc -o fdf $(CFLAGS) $(SRC) $(LIB) -lmlx -framework OpenGL -framework Appkit
$(LIB) :
	cd debug/ && make
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
supclean : fclean
	cd debug && make supclean
test : all
	@printf '\n%.0s' {1..3}
	@printf '#%.0s' {1..$(DLENGHT)}
	@printf '$(TTEXT)'
	@printf '\n%0.s' {1..3}
	@-./$(NAME) 42.fdf
	@printf '\n%.0s' {1..3}
	@printf '#%.0s' {1..$(DLENGHT)}
	@printf '\n%0.s' {1..3}
	@-rm $(NAME)
re : fclean all
go : all clean
.PHONY : go re fclean clean all
