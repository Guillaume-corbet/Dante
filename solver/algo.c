/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** algo
*/

#include "dante.h"

int search_star(map_t *map, character_t *charac)
{
    if (charac->y < map->y && map->tab[charac->y + 1][charac->x] == '*') {
        map->tab[charac->y + 1][charac->x] = 'o';
        charac->y = charac->y + 1;
    } else if (charac->x < map->x &&
    map->tab[charac->y][charac->x + 1] == '*') {
        map->tab[charac->y][charac->x + 1] = 'o';
        charac->x = charac->x + 1;
    } else if (charac->y > 0 && map->tab[charac->y - 1][charac->x] == '*') {
        map->tab[charac->y - 1][charac->x] = 'o';
        charac->y = charac->y - 1;
    } else if (charac->x > 0 && map->tab[charac->y][charac->x - 1] == '*') {
        map->tab[charac->y][charac->x - 1] = 'o';
        charac->x = charac->x - 1;
    } else
        return (1);
    return (0);
}

int search_o(map_t *map, character_t *charac)
{
    if (charac->y < map->y && map->tab[charac->y + 1][charac->x] == 'o' &&
    map->tab[charac->y][charac->x] == 'o') {
        map->tab[charac->y][charac->x] = 'b';
        charac->y = charac->y + 1;
    } else if (charac->x < map->x && map->tab[charac->y][charac->x + 1] == 'o'
    && map->tab[charac->y][charac->x] == 'o') {
        map->tab[charac->y][charac->x] = 'b';
        charac->x = charac->x + 1;
    } else if (charac->y > 0 && map->tab[charac->y - 1][charac->x] == 'o' &&
    map->tab[charac->y][charac->x] == 'o') {
        map->tab[charac->y][charac->x] = 'b';
        charac->y = charac->y - 1;
    } else if (charac->x > 0 && map->tab[charac->y][charac->x - 1] == 'o' &&
    map->tab[charac->y][charac->x] == 'o') {
        map->tab[charac->y][charac->x] = 'b';
        charac->x = charac->x - 1;
    } else
        return (1);
    return (0);
}

int algo_v1_2(map_t *map, character_t *charac)
{
    map->tab[charac->y][charac->x] = 'o';
    while (charac->x < map->x || charac->y < map->y) {
        if (search_star(map, charac) == 1) {
            if (search_o(map, charac) == 1) {
                my_putstr(NO_SOL);
                return (84);
            }
        }
    }
    map->tab[charac->y][charac->x] = 'o';
    return (0);
}