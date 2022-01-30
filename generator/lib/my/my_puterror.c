/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2018
** File description:
** write on output 2 (error output)
*/

#include "my.h"

void my_puterror(char *str)
{
    write(2, str, my_strlen(str));
}
