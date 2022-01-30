/*
** EPITECH PROJECT, 2018
** getnbr
** File description:
** copies a number from a string into an int
*/

int my_getnbr(char *str)
{
    int nb = 0;
    int isneg = 1;
    int i = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            isneg = isneg * -1;
        i++;
    }
    while (str[i] != '\0' && str[i] != ' ') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = nb + str[i] - '0';
            i++;
        } else
            return (-1);
    }
    return (nb * isneg);
}
