/*
** EPITECH PROJECT, 2018
** strcmp
** File description:
** compares n numbers of two strings
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int j;

    while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
        i = i + 1;
    j = s1[i] - s2[i];
    return (j);
}
