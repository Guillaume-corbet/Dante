/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** init_struct
*/

#include "dante.h"

map_t *init_struct_map(char **argv)
{
    map_t *map;

    if ((map = malloc(sizeof(map_t))) == NULL)
        return (NULL);
    map->x = 0;
    map->y = 0;
    map->tab = stock_map(argv, map);
    if (map->x == -1)
        return (map);
    if (map->tab == NULL) {
        putstr_error(ERROR_MAP);
        return (NULL);
    }
    return (map);
}

character_t *init_charac(void)
{
    character_t *charac;

    if ((charac = malloc(sizeof(character_t))) == NULL)
        return (NULL);
    charac->x = 0;
    charac->y = 0;
    return (charac);
}