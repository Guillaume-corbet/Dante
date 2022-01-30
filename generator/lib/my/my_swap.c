/*
** EPITECH PROJECT, 2018
** my_swap
** File description:
** swaps
*/

void my_swap(int *a, int *b)
{
    char stock = 0;

    stock = *a;
    *a = *b;
    *b = stock;
}
