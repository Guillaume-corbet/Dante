/*
** EPITECH PROJECT, 2019
** array_size
** File description:
** gets the size of an array
*/

#include "my.h"

int array_size(char **array)
{
    int size = 0;

    if (array == NULL)
        return (0);
    while (array[size])
        size++;
    return (size);
}