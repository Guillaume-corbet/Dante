##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## program
##

SRC		=		./src/*.c

NAME	=		generator

LFLAGS	=		-L./lib/my/ -lmy

FLAGS	=		-W -Wall -Werror -Wextra -Wunused-macros -Wendif-labels -pedantic -Wcomment -Wmissing-braces -Wmissing-include-dirs -Wparentheses -Wsequence-point -ansi -Wrestrict -ggdb

INC		=		-I include

all:	$(NAME)

$(NAME):
		(cd ./lib/my/ && make -s)
		gcc -o $(NAME) $(SRC) $(LFLAGS) $(INC) -O3

valgrind:
		(cd ./lib/my/ && make -s)
		gcc -o $(NAME) $(SRC) $(LFLAGS) $(INC) -g3

warning:
		(cd ./lib/my/ && make -s)
		gcc -o $(NAME) $(SRC) $(FLAGS) $(LFLAGS) $(INC) -g3

optimize:
		(cd ./lib/my/ && make -s)
		gcc -o $(NAME) $(SRC) $(LFLAGS) $(INC) -O3

clean:
		rm -f $(NAME)

fclean:
		(cd ./lib/my/ && make fclean)
		rm -f $(NAME)
		rm -f *.a
		rm -f *#
		rm -f *~

re:		fclean
		(cd ./lib/my/ && make fclean -s && make re -s)
		gcc -o $(NAME) $(SRC) $(LFLAGS) $(INC) -O3
