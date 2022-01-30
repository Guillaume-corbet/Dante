/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** main
*/

#include "my.h"

char *my_strcpy(char *dest, char *src)
{
    int counter = -1;

    dest = malloc(sizeof(char) * my_strlen(src) + 2);
    while (src[++counter] != '\0')
        dest[counter] = src[counter];
    dest[++counter] = '\0';
    return (dest);
}
