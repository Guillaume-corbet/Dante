/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** functions_part2
*/

#include "my.h"

void to_oct(int value)
{
    char *av = "01234567";
    int count = 3;
    char *oct = my_strcpy(oct, "000");
    int number = value;
    int nb = value;

    while (count != 0) {
        count--;
        nb = nb % 8;
        oct[count] = av[nb];
        nb = number / 8;
        number = nb;
    } my_putstr(oct);
    free(oct);
}

void print_idk(const char *str, va_list args, int i)
{
    char *av = va_arg(args, char *);
    int k = -1;

    while (av[++k] != '\0') {
        if (av[k] > 32 && av[k] < 127)
            my_putchar(av[k]);
        else {
            my_putchar('\\');
            to_oct(av[k]);
        }
    }
}

int base_0(unsigned int check)
{
    if (check == 0) {
        my_putchar('0');
        return (0);
    } else
        return (0);
}

void print_un_int(const char *str, va_list args, int i)
{
    unsigned int a = va_arg(args, int);

    my_put_unsigned_nbr(a);
}

void print_char(const char *str, va_list args, int i)
{
    my_putchar(va_arg(args, int));
}
