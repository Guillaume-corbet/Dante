/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** minishell
*/

#ifndef DANTE_H_
#define DANTE_H_

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <time.h>
#include "lib/my/my.h"
#include "lib/my_printf/my_printf.h"

#define STR (str[i] != '\0')
#define ERROR_MAP "Error on map file\n"
#define NO_SOL "no solution found\n"

typedef struct struct_map
{
    int x;
    int y;
    char **tab;
}map_t;

typedef struct character
{
    int x;
    int y;
}character_t;

void display_tab(char **tab);
int supress_space(char *str, int i);
int count_words(char *str);
char **str_to_word_array(char *str);
int length_tab(char **tab);

char **str_to_word_array_sec(char *str, char c);

char *fill_str(char *str, int i);

void free_tab(char **tab);

char *my_strcpy_verif(char *dest, char *src);
char *stock_line(char *str);
size_t know_size_file(char *argv);
char **stock_map(char **argv, map_t *map);
void putstr_error(char *str);
void display_tabl(map_t *map);

map_t *init_struct_map(char **argv);
character_t *init_charac(void);

int search_star(map_t *map, character_t *charac);
int search_o(map_t *map, character_t *charac);
int algo_v1_2(map_t *map, character_t *charac);

#endif /* !DANTE_H_ */
