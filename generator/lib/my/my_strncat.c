/*
** EPITECH PROJECT, 2018
** day07
** File description:
** cats n number of two strings together
*/

#include "my.h"

char *my_strncat(char *fus, char *ion, int n)
{
    char *fusion = malloc(my_strlen(fus) + my_strlen(ion) + 1);
    int k = 0;

    for (int i = 0; fus[i] != '\0' && k != n; i++) {
        fusion[k] = fus[i];
        k++;
    } for (int i = 0; ion[i] != '\0' && k != n; i++) {
        fusion[k] = ion[i];
        k++;
    } fusion[k++] = '\0';
    return (fusion);
}
