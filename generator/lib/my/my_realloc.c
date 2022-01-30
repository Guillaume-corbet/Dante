/*
** EPITECH PROJECT, 2019
** simon.bernabeu@epitech.eu
** File description:
** my_realloc
*/

#include "my.h"

char *my_realloc(char *str, size_t size)
{
    char *dest = NULL;
    size_t i = 0;

    dest = malloc(sizeof(char *) * size + 1);
    dest = my_memset(dest, '\0', (sizeof(size + 1)));
    while (i != size && str[i] != '\0') {
        dest[i] = str[i];
        i++;
    }
    free(str);
    return (dest);
}