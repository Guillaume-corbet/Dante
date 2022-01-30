/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** free
*/

#include "generator.h"

void free_fct(gen_t *gen)
{
    int i = 0;

    if (gen->p->p_path)
        free(gen->p->p_path);
    i += 1;
    if (gen->p)
        free(gen->p);
    if (gen->map)
        free(gen->map);
}
