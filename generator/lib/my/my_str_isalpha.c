/*
** EPITECH PROJECT, 2018
** str_isalpha
** File description:
** checks if string is only alpha
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 65 || str[i] > 90)
        && (str[i] < 97 || str[i] > 122)
        && (str[i] < 48 || str[i] > 57)) {
            return (0);
        }
    } return (1);
}
