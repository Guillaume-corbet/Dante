/*
** EPITECH PROJECT, 2018
** put_nbr
** File description:
** displays ints
*/

#include "my.h"

int my_putnbr(int nb)
{
    int mod;

    if (nb == -2147483648)
        my_putstr("-2147483648");
    else if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    } if (nb >= 0) {
        if (nb >= 10) {
            mod = (nb % 10);
            nb = (nb - mod) / 10;
            my_putnbr(nb);
            my_putchar(48 + mod);
        } else
            my_putchar(48 + nb % 10);
    } return (0);
}
