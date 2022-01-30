/*
** EPITECH PROJECT, 2018
** put_nbr
** File description:
** displays ints
*/

#include "my.h"

void my_put_unsigned_nbr(unsigned int nb)
{
    unsigned int mod = 0;

    if (nb >= 10) {
        mod = (nb % 10);
        nb = (nb - mod) / 10;
        my_putnbr(nb);
        my_putchar(48 + mod);
    } else
        my_putchar(48 + nb % 10);
}
