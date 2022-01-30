/*
** EPITECH PROJECT, 2018
** strlen
** File description:
** str length
*/

#include "my.h"

int my_strlen(char *str)
{
    int counter = -1;

    while (str[++counter] != '\0');
    return (counter);
}
