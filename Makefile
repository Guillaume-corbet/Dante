##
## EPITECH PROJECT, 2019
## CPE_dante_2018
## File description:
## Makefile
##

all:
	(cd generator && make -s)
	(cd solver && make -s)

fclean:
	(cd generator && make fclean -s)
	(cd solver && make fclean -s)

re:
	(cd generator && make re -s)
	(cd solver && make -s)
