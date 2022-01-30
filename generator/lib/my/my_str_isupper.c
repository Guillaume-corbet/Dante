/*
** EPITECH PROJECT, 2018
** str_isupper
** File description:
** checks if string is upper case only
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    int i = -1;

    while (str[++i]) {
        if (str[i] > 64 || str[i] < 91)
            return (1);
    } return (0);
}
