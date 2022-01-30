/*
** EPITECH PROJECT, 2018
** base.c
** File description:
** every_base_function
*/

#include "my.h"

void print_oct(const char *str, va_list args, int i)
{
    char *av = "01234567";
    unsigned int count = 0;
    char *oct = NULL;
    unsigned int number = va_arg(args, unsigned int);
    unsigned int nbr = number;

    base_0(number);
    for (unsigned int nb = number; nb != 0; count++)
        nb = nb / 8;
    if ((oct = malloc(sizeof(char) * (count) + 1)) == NULL)
        return ;
    oct[count] = '\0';
    while (number != 0) {
        count--;
        number = number % 8;
        oct[count] = av[number];
        number = nbr / 8;
        nbr = number;
    } my_putstr(oct);
    free(oct);
}

void print_hex_up(const char *str, va_list args, int i)
{
    char *av = "0123456789ABCDEF";
    unsigned int count = 0;
    char *hex = NULL;
    unsigned int number = va_arg(args, unsigned int);
    unsigned int nbr = number;

    base_0(number);
    for (unsigned int nb = number; nb != 0; count++)
        nb = nb / 16;
    if ((hex = malloc(sizeof(char) * (count) + 1)) == NULL)
        return ;
    hex[count] = '\0';
    while (number != 0) {
        count--;
        number = number % 16;
        hex[count] = av[number];
        number = nbr / 16;
        nbr = number;
    } my_putstr(hex);
    free(hex);
}

void print_hex_low(const char *str, va_list args, int i)
{
    char *av = "0123456789abcdef";
    unsigned int count = 0;
    char *hex = NULL;
    unsigned int number = va_arg(args, unsigned int);
    unsigned int nbr = number;

    base_0(number);
    for (unsigned int nb = number; nb != 0; count++)
        nb = nb / 16;
    if ((hex = malloc(sizeof(char) * (count) + 1)) == NULL)
        return ;
    hex[count] = '\0';
    while (number != 0) {
        count--;
        number = number % 16;
        hex[count] = av[number];
        number = nbr / 16;
        nbr = number;
    } my_putstr(hex);
    free(hex);
}

void print_binary(const char *str, va_list args, int i)
{
    char *av = "01";
    unsigned int count = 0;
    char *bin = NULL;
    unsigned int number = va_arg(args, unsigned int);
    unsigned idk = number;

    base_0(number);
    for (unsigned int nb = number; nb != 0; count++)
        nb = nb / 2;
    if ((bin = malloc(sizeof(char) * (count) + 1)) == NULL)
        return ;
    bin[count] = '\0';
    while (number != 0) {
        count--;
        number = number % 2;
        bin[count] = av[number];
        number = idk / 2;
        idk = number;
    } my_putstr(bin);
    free(bin);
}

void to_hex(void *value)
{
    char *av = "0123456789abcdef";
    unsigned long count = 0;
    char *hex = NULL;
    unsigned long number = (unsigned long) value;
    unsigned long nbr = (unsigned long) value;

    for (unsigned long nb = (unsigned long) value; nb != 0; count++)
        nb = nb / 16;
    if ((hex = malloc(sizeof(char) * (count) + 1)) == NULL)
        return ;
    hex[count] = '\0';
    while (number != 0) {
        count--;
        number = number % 16;
        hex[count] = av[number];
        number = nbr / 16;
        nbr = number;
    } my_putstr(hex);
    free(hex);
}
