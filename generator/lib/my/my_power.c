/*
** EPITECH PROJECT, 2018
** compute_power_rec
** File description:
** power a number nb by p
*/

int my_compute_power_rec(int nb, int p)
{
    int result = 1;

    if (p == 0)
        return (1);
    if (p < 0)
        return (-42);
    if (p > 0)
        result = nb * my_compute_power_rec(nb, p - 1);
    if (result > 2147483647)
        return (-42);
    return (result);
}
