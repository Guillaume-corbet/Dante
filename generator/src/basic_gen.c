/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** basic_gen
*/

#include "generator.h"

int rng_path(gen_t *g)
{
    int i = 0;
    int nbr = 0;
    int tmp = 0;
    char array[4] = {0, 0, 0, 0};

    (g->p->dir & 2) ? array[i++] = 2 : 0;
    (g->p->dir & 8) ? array[i++] = 8 : 0;
    (g->p->dir & 1) ? array[i++] = 1 : 0;
    (g->p->dir & 4) ? array[i++] = 4 : 0;
    if (array[1] == 0)
        nbr = 0;
    else {
        (array[2] == 0 && array[3] == 0) ? nbr = rand() % 2 : 0;
        (array[2] != 0 && array[3] == 0) ? nbr = rand() % 3 : 0;
    }
    tmp = choose_pos(array[nbr], g);
    return (tmp);
}

void set_path_second(gen_t *g)
{
    if (g->pos + ((g->x + 1) * 2) <= g->size - 1
    && g->map[g->pos + (g->x + 1) * 2] == 'X') {
        g->p->dir |= 2;
        g->p->path_nb += 1;
    }
    if (g->pos - ((g->x + 1) * 2) >= 0
    && g->map[g->pos - (g->x + 1) * 2] == 'X') {
        g->p->dir |= 4;
        g->p->path_nb += 1;
    }
}

void set_path(gen_t *g)
{
    if (g->pos + 2 <= g->size && g->map[g->pos + 1] != '\n'
    && g->map[g->pos + 2] == 'X') {
        g->p->dir |= 1;
        g->p->path_nb += 1;
    }
    if (g->pos - 2 >= 0 && g->map[g->pos - 1] != '\n'
    && g->map[g->pos - 2] == 'X') {
        g->p->dir |= 8;
        g->p->path_nb += 1;
    }
    set_path_second(g);
}

void perfect_imperfect(gen_t *g)
{
    int i = 0;

    g->map[g->size - 2] = '*';
    if (g->y % 2 == 0 && g->x % 2 == 0)
        g->map[(g->size - 2) - g->x - 1] = '*';
    if (g->perf == 1) {
        i = g->x / 2;
        for (int ctr = 0; ctr < g->y; ctr++) {
            (ctr % 2 == 0) ? g->map[i] = '*' : (g->map[i] = 'X');
            i += g->x + 1;
        }
    }
}

void basic_gen(gen_t *g)
{
    while (g->p->p_path[0] != -1) {
        g->p->path_nb = 0;
        g->p->dir = 0;
        set_path(g);
        if (g->p->path_nb > 1) {
            g->p->p_path[g->p->int_nb] = g->pos;
            g->p->int_nb += 1;
        } else if (g->p->path_nb == 0) {
            g->pos = g->p->p_path[g->p->int_nb - 1];
            g->p->p_path[g->p->int_nb - 1] = -1;
            g->p->int_nb -= 1;
            continue;
        }
        g->pos = rng_path(g);
        g->map[g->pos] = '*';
    }
    perfect_imperfect(g);
    printf("%s", g->map);
}
