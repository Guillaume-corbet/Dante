/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** choose_pos
*/

#include "generator.h"

int choose_pos_sec(char c, gen_t *g)
{
    if ((g->p->dir & 4) != 0) {
        g->map[g->pos - g->x - 1] = '*';
        return (g->pos - ((g->x + 1) * 2));
    }
    if ((g->p->dir & 8) != 0) {
        g->map[g->pos - 1] = '*';
        return (g->pos - 2);
    }
    return (FALSE);
}

int choose_pos(char c, gen_t *g)
{
    int tmp = g->pos + g->x + 1;
    int ret = 0;

    g->p->dir = c;
    if ((g->p->dir & 1) != 0) {
        g->map[g->pos + 1] = '*';
        return (g->pos + 2);
    }
    if ((g->p->dir & 2) != 0 && tmp < g->size) {
        g->map[g->pos + g->x + 1] = '*';
        return (g->pos + ((g->x + 1) * 2));
    }
    ret = choose_pos_sec(c, g);
    return (ret);
}
