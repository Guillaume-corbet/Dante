/*
** EPITECH PROJECT, 2019
** ApprentisCodeurs
** File description:
** my_memset
*/

#include "my.h"

char *my_memset(char *buf, int c, size_t len)
{
    size_t i = 0;

    while (i != len) {
        buf[i] = c;
        i++;
    } return (buf);
}