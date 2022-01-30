/*
** EPITECH PROJECT, 2019
** Fonction_utile
** File description:
** fill_str
*/

char *fill_str(char *str, int x)
{
    int i = 0;

    while (i < x) {
        str[i] = '\0';
        i = i + 1;
    }
    return (str);
}