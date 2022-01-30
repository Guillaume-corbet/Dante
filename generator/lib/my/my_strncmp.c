/*
** EPITECH PROJECT, 2018
** strncmp
** File description:
** compares n number of two strings
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int j;

    while ((i != n) && (s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
        i += 1;
    j = s1[i] - s2[i];
    return (j);
}
