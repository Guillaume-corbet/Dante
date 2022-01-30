/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** functions_part3
*/

#include "my.h"

void print_pointer(const char *str, va_list args, int i)
{
    void *conv = va_arg(args, void *);

    my_putstr("0x");
    to_hex(conv);
}

void print_mod(const char *str, va_list args, int i)
{
    my_putchar('%');
}

void print_str(const char *str, va_list args, int i)
{
    my_putstr(va_arg(args, char *));
}

void print_int(const char *str, va_list args, int i)
{
    my_putnbr(va_arg(args, int));
}
