/*
** EPITECH PROJECT, 2019
** CPE_getnextline_2018
** File description:
** reads line by line and returns the malloc'd line read
*/

#include "my.h"

int my_strclen(char *str, char c)
{
    int counter = 0;

    if (str == NULL)
        return (-42);
    while (str[counter] != '\0' && str[counter] != c)
        counter++;
    return (counter);
}

int my_strdup_gnl(char **fus, char *ion)
{
    int i = -1;
    int k = -1;
    char *str = NULL;
    int fus_len = my_strlen(*fus);
    int ion_len = my_strlen(ion);
    int total_len = fus_len + ion_len + 1;

    if ((str = malloc(sizeof(char *) * total_len)) == NULL
    || *fus == NULL || fus == NULL || ion == NULL)
        return (-1);
    while (++i < fus_len) {
        str[i] = (*fus)[i];
    } while (++k < ion_len) {
        str[i + k] = ion[k];
    } str[i + k] = '\0';
    free(*fus);
    *fus = str;
    return (0);
}

int read_line(char **line, int fd)
{
    int c_read = 0;
    int total = 0;
    char *buffer = malloc(sizeof(char) * READ_SIZE + 1);

    if (buffer == NULL || line == NULL || *line == NULL) {
        if (buffer)
            free(buffer);
        return (-84);
    } buffer = my_memset(buffer, '\0', READ_SIZE + 1);
    do {
        if (my_strclen(*line, '\n') < my_strclen(*line, 0))
            break;
        if ((c_read = read(fd, buffer, READ_SIZE) ) == -1
        || my_strdup_gnl(line, buffer) == -1) {
            free(buffer);
            return (-84);
        } total += c_read;
    } while (c_read != 0);
    free(buffer);
    return (total);
}

char *get_line(char *line)
{
    int i = 0;
    int k = 0;
    int total_size = my_strlen(line);
    int line_len = my_strclen(line, '\n');
    char *str = malloc(sizeof(char *) * line_len + 1);

    if (str == NULL || line == NULL || line[0] == '\0') {
        if (str != NULL)
            free(str);
        return (NULL);
    } while (line[i] != '\0') {
        str[i] = line[i];
        i++;
    } while (k < total_size - line_len) {
        line[k] = line[i + k];
        k++;
    } line[k] = '\0';
    str[line_len] = '\0';
    return (str);
}

char *get_next_line(int fd)
{
    int read = 0;
    char *str = NULL;
    static char *line = NULL;

    if (line == NULL) {
        if ((line = malloc(sizeof(char *) * 1)) == NULL)
            return (NULL);
        line = my_memset(line, '\0', 1);
    } if (READ_SIZE <= 0 || fd < 0)
        return (NULL);
    read = read_line(&line, fd);
    str = get_line(line);
    if (str == NULL || read == -84) {
        free(line);
        line = NULL;
    } return (str);
}
