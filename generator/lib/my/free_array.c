/*
** EPITECH PROJECT, 2019
** free_array
** File description:
** frees entirely an array
*/

#include "my.h"

void free_array(char **array)
{
    if (array == NULL)
        return ;
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
}
