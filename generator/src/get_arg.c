/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** get_arg
*/

#include "generator.h"

void check_arg(int x, int y)
{
    if (x < 2 || y < 2)
        exit(ERROR);
}

path_t *path_ini(gen_t *g)
{
    path_t *new = malloc(sizeof(path_t));

    if (!new)
        exit(ERROR);
    new->path_nb = 0;
    new->int_nb = 0;
    if ((new->p_path = malloc(sizeof(int) * g->size)) == NULL)
        exit(ERROR);
    for (int i = -1; ++i < g->size; new->p_path[i] = 0);
    new->dir = 0;
    return (new);
}

gen_t *setup_new(gen_t *new)
{
    int i = new->x;

    new->pos = 0;
    new->map = malloc(sizeof(char) * new->size);
    if (!new->map)
        exit(ERROR);
    memset(new->map, 'X', new->size - 1);
    for (int n = -1; ++n < new->y - 1; i += new->x + 1)
        new->map[i] = '\n';
    new->map[new->size - 1] = '\0';
    new->map[0] = '*';
    return (new);
}

gen_t *get_arg(int ac, char **av)
{
    gen_t *new = malloc(sizeof(gen_t));

    if (new == NULL)
        exit(ERROR);
    new->x = my_getnbr(av[1]);
    new->y = my_getnbr(av[2]);
    check_arg(new->x, new->y);
    new->size = new->x * new->y + new->y;
    new->p = path_ini(new);
    if (ac == 4 && my_strcmp("perfect", av[3]) == 0)
        new->perf = 0;
    else
        new->perf = 1;
    new = setup_new(new);
    return (new);
}
