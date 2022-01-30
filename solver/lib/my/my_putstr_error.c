/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** my_putstr_error
*/

#include "my.h"
#include "unistd.h"

void putstr_error(char *str)
{
    write(2, str, my_strlen(str));
}