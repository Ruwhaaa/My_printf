##
## EPITECH PROJECT, 2017
## Bootstrap my_ptrintf.c
## File description:
## Makefile
##

SRC	=	my_printf.c	\
		func.c	\
		main.c	\
		lib/my/my_putchar.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_putstr.c	\
		lib/my/my_revstr.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -Iinclude

NAME	=	test

$(NAME):	 $(OBJ)
	gcc -o $(NAME) $(OBJ) $(LDFLAGS)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
