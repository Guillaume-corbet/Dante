/*
** EPITECH PROJECT, 2018
** revstr
** File description:
** reverses a string (have to free)
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int max = my_strlen(str) - 1;
    char *stock = NULL;

    if ((stock = malloc(sizeof(char) * my_strlen(str) + 1)) == NULL)
        return (NULL);
    stock = my_memset(stock, '\0', (sizeof(char) * my_strlen(str) + 1));
    while (str[i]) {
        stock[max] = str[i];
        i++;
        max--;
    } return (stock);
}
