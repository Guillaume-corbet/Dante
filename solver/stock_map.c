/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** stock_map
*/

#include "dante.h"

char *my_strcpy_verif(char *dest, char *src)
{
    int counter = 0;

    while (src[counter] != '\0') {
        if (src[counter] != '*' && src[counter] != 'X' && src[counter] != '\n')
            return (NULL);
        dest[counter] = src[counter];
        counter = counter + 1;
    }
    dest[counter] = '\0';
    return (dest);
}

char *stock_line(char *str)
{
    char *new_str;

    if ((new_str = malloc(sizeof(char) * my_strlen(str) + 1)) == NULL)
        return (NULL);
    if ((new_str = my_strcpy_verif(new_str, str)) == NULL)
        return (NULL);
    if (new_str[my_strlen(str) - 1] == '\n')
        new_str[my_strlen(str) - 1] = '\0';
    return (new_str);
}

size_t know_size_file(char *argv)
{
    size_t bufs = 0;
    struct stat sb;

    stat(argv, &sb);
    bufs = sb.st_size + 1;
    return (bufs);
}

char *end(int i, map_t *map, FILE *fd, char *str)
{
    fclose(fd);
    free(str);
    return (NULL);
}

char **stock_map(char **argv, map_t *map)
{
    FILE *fd = 0;
    size_t bufs = 0;
    char *str;
    char **tab;
    int i = 0;

    if ((bufs = know_size_file(argv[1])) == 1) {
        map->x = -1;
        return (NULL);
    }
    if ((str = malloc(sizeof(char) * bufs + 1)) == NULL ||
    (fd = fopen(argv[1], "r")) == NULL ||
    (tab = malloc(sizeof(char *) * bufs + 1)) == NULL)
        return (NULL);
    while (getline(&str, &bufs, fd) != -1) {
        if ((tab[i] = stock_line(str)) == NULL)
            return (NULL);
        i = i + 1;
    }
    tab[i] = end(i, map, fd, str);
    return (tab);
}
