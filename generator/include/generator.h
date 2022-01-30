/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** generator
*/

#ifndef GENERATOR_H_
# define GENERATOR_H_

#include "my.h"
#include <string.h>
#include <time.h>

#define SUCCESS (0)
#define ERROR (84)
#define ISSUE (1)
#define TRUE (1)
#define FALSE (0)

typedef struct path {
    int path_nb;
    int *p_path;
    int int_nb;
    char dir;
}path_t;

typedef struct generator
{
    int x;
    int y;
    int pos;
    int perf;
    char *map;
    path_t *p;
    unsigned int size;
}gen_t;

/* choose_pos.c */
int choose_pos(char, gen_t *);

/* get_arg.c */
gen_t *get_arg(int, char **);

/* basic_gen.c */
void basic_gen(gen_t *);

/* free_fct.c */
void free_fct(gen_t *);

#endif /* !GENERATOR_H_ */
