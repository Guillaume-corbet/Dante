/*
** EPITECH PROJECT, 2018
** putstr
** File description:
** diplays str
*/

#include "my.h"

void my_putstr(char  *str)
{
    int counter = 0;

    if (str)
        write(1, str, my_strlen(str));
    else
        write(1, "(null)", 6);
}
