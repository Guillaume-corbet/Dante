/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** main
*/

#include "generator.h"

int main(int ac, char **av)
{
    gen_t *gen;

    srand(time(NULL));
    if (ac == 3 || ac == 4) {
        gen = get_arg(ac, av);
        basic_gen(gen);
        free_fct(gen);
        return (SUCCESS);
    } else
        return (ERROR);
}
