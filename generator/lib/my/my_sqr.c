/*
** EPITECH PROJECT, 2018
** compute_square_root
** File description:
** sqrts a number nb
*/

int my_compute_square_root(int nb)
{
    int sqr = 1;
    int value = 1;
    int keep = 0;

    if (nb < 1 || nb > 2147483647)
        return (0);
    sqr = nb / value;
    while (sqr != nb)
        value = value + 1;
    return (value);
}
