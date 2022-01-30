/*
** EPITECH PROJECT, 2018
** CPool_2018
** File description:
** cats two str and automatically puts a good '\0' at the end
*/

#include "my.h"

char *my_strcat(char *fus, char *ion)
{
    char *fusion = NULL;
    int len = my_strlen(fus) + my_strlen(ion) + 2;
    int k = 0;

    if ((fusion = malloc(sizeof(char *) * len)) == NULL)
        return (NULL);
    fusion = my_memset(fusion, '\0', len);
    for (int i = 0; fus[i] != '\0'; i++) {
        fusion[k] = fus[i];
        k++;
    } for (int i = 0; ion[i] != '\0'; i++) {
        fusion[k] = ion[i];
        k++;
    } return (fusion);
}
