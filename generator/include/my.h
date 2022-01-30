/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** lib
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

#ifndef READ_SIZE
#define READ_SIZE (500)
#endif /* !READ_SIZE */

void my_putchar(char);
int my_isneg(int);
int my_putnbr(int);
void my_swap(int *, int *);
void my_putstr(char *);
int my_strlen(char *);
char *my_strcpy(char *, char *);
int my_getnbr(char *);
int my_power(int, int);
int my_sqr(int);
char *my_strncpy(char *, char const *, int);
char *my_revstr(char *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
int my_str_isalpha(char const *);
int my_str_isnum(char const *);
int my_str_islower(char const *);
char *my_strcat(char *, char *);
char *my_strncat(char *, char *, int);
void print_int(const char *, va_list, int);
void print_oct(const char *, va_list, int);
void print_hex_low(const char *, va_list, int);
void print_hex_up(const char *, va_list, int);
void print_un_int(const char *, va_list, int);
void print_char(const char *, va_list, int);
void print_str(const char *, va_list, int);
void print_pointer(const char *, va_list, int);
void print_mod(const char *, va_list, int);
void print_binary(const char *, va_list, int);
void print_idk(const char *, va_list, int);
void to_hex(void *);
void to_oct(int);
int base_0(unsigned int);
void my_printf(const char *, ...);
void my_put_unsigned_nbr(unsigned int);
void my_puterror(char *);
char *my_memset(char *, int, size_t);
int array_size(char **);
void free_array(char **);
char *get_next_line(int);
char *my_strcpy(char *, char *);
int my_strclen(char *, char);
char *my_realloc(char *, size_t);

#endif /*MY_H_*/
