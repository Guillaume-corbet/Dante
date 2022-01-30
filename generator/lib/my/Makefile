##
## EPITECH PROJECT, 2019
## PSU_minishell1_2018
## File description:
## Makefile
##

SRC		=		array_size.c		\
				base.c				\
				base_2.c			\
				base_3.c			\
				free_array.c		\
				my_getnbr.c			\
				my_gnl.c			\
				my_isneg.c			\
				my_memset.c			\
				my_power.c			\
				my_printf.c			\
				my_put_uns_nbr.c	\
				my_putchar.c		\
				my_puterror.c		\
				my_putnbr.c			\
				my_putstr.c			\
				my_realloc.c		\
				my_revstr.c			\
				my_sqr.c			\
				my_str_isalpha.c	\
				my_str_isnum.c		\
				my_str_isupper.c	\
				my_strcat.c			\
				my_strcmp.c			\
				my_strcpy.c			\
				my_strlen.c			\
				my_strncat.c		\
				my_strncmp.c		\
				my_strncpy.c		\
				my_swap.c



OBJ		=		$(SRC:.c=.o)

NAME	=		libmy.a

all:	$(NAME) clean

$(NAME):	$(OBJ)
			ar rc libmy.a *.o
			(cp my.h ../../include/)

clean:
		rm -f $(OBJ)

fclean:
		rm -f $(NAME)

re:	fclean all

auteur:
		echo $(USER) > Simon
