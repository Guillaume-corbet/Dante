/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2018
** File description:
** str_to_word_tab_sec
*/

#include "dante.h"

char **str_to_word_array_sec(char *str, char c)
{
    char **tab;
    int i = 0;
    int x = 0;
    int y = 0;

    if ((tab = malloc(sizeof(char *) * my_strlen(str))) == NULL)
        return (NULL);
    while (str[i] != '\0') {
        if ((tab[x] = malloc(sizeof(char) * my_strlen(str) + 1)) == NULL)
            return (NULL);
        tab[x] = fill_str(tab[x], my_strlen(str) + 1);
        while (str[i] != '\0' && str[i] != c) {
            tab[x][y] = str[i];
            i = i + 1;
            y = y + 1;
        } if (str[i] != '\0')
            i = i + 1;
        y = 0;
        x = x + 1;
    } tab[x] = NULL;
    return (tab);
}