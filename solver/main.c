/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** main
*/

#include "dante.h"

int verif_begin_end(map_t *map)
{
    map->y = length_tab(map->tab) - 1;
    map->x = my_strlen(map->tab[map->y]) - 1;
    if (map->tab[0][0] != '*' || map->tab[map->y][map->x] != '*') {
        my_putstr(NO_SOL);
        return (84);
    }
    return (0);
}

void change_other(map_t *map)
{
    int x = 0;
    int y = 0;

    while (y < map->y + 1) {
        while (x < map->x + 1) {
            if (map->tab[y][x] == 'b')
                map->tab[y][x] = '*';
            x = x + 1;
        }
        x = 0;
        y = y + 1;
    }
}

void display_tabl(map_t *map)
{
    int i = 0;

    while (map->tab[i] != NULL) {
        write(1, map->tab[i], map->x + 1);
        if (map->tab[i + 1] != NULL)
            write(1, "\n", 1);
        i = i + 1;
    }
}

void free_all(map_t *map)
{
    free_tab(map->tab);
    free(map);
}

int main(int argc, char **argv)
{
    map_t *map;
    character_t *charac;

    if ((map = init_struct_map(argv)) == NULL) {
        my_putstr(NO_SOL);
        return (84);
    }
    if (map->x == -1) {
        my_putstr(NO_SOL);
        return (84);
    }
    if ((charac = init_charac()) == NULL)
        return (84);
    if (verif_begin_end(map) == 84)
        return (84);
    if (algo_v1_2(map, charac) == 84)
        return (84);
    change_other(map);
    display_tabl(map);
    free_all(map);
    return (0);
}