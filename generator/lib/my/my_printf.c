/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** main_functions
*/

#include "my.h"

int delete(const char *str, int i)
{
    char *av = "dioxXucsp%bSm";
    int k = 0;

    while (str[i] != av[k]) {
        k++;
        if (k >= 12) {
            k = 0;
            i++;
        }
    } return (i);
}

void redirect(const char *str, va_list args, int i)
{
    void (*flag_tab[12])(const char *, va_list, int);
    char *opp = "dioxXucsp%bS";
    int k = -1;

    flag_tab[0] = &print_int;
    flag_tab[1] = &print_int;
    flag_tab[2] = &print_oct;
    flag_tab[3] = &print_hex_low;
    flag_tab[4] = &print_hex_up;
    flag_tab[5] = &print_un_int;
    flag_tab[6] = &print_char;
    flag_tab[7] = &print_str;
    flag_tab[8] = &print_pointer;
    flag_tab[9] = &print_mod;
    flag_tab[10] = &print_binary;
    flag_tab[11] = &print_idk;

    while (opp[++k] != str[i]);
    flag_tab[k](str, args, i);
}

void option(const char *str, va_list args)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != '%')
            my_putchar(str[i]);
        else if (str[i] == '%') {
            i++;
            i = delete(str, i);
            redirect(str, args, i);
        } i++;
    }
}

void my_printf(const char *str, ...)
{
    va_list ap;

    va_start(ap, str);
    option(str, ap);
    va_end(ap);
}
