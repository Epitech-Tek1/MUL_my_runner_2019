/*
** EPITECH PROJECT, 2020
** PSU_my_printf_2019
** File description:
** my_printf
*/

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define EXIT_SUCCESS                    0
#define RETURN_AFTER_DELETE_SPACE       i - (i - n + 1)
#define IS_NUMBER                       str[i - 1] >= '0' && str[i - 1] <= '9'

int my_printf(char *, ...);
int my_print_space(int, char *);
int my_print_string(va_list, char *, int);
int my_print_char(va_list, char *, int);
int my_print_per(va_list, char *, int);
int my_print_int(va_list, char *, int);
int my_print_hexa(va_list, char *, int);
int my_print_hexa_up(va_list, char *, int);
int my_print_pointer(va_list, char *, int);
int my_print_unint(va_list, char *, int);
int my_print_octal(va_list, char *, int);
int my_print_binary(va_list, char *, int);
int my_print_diez(va_list, char *, int);
int my_print_add(va_list, char *, int);
int my_print_sub(va_list, char *, int);
int my_print_long(va_list, char *, int);
int my_print_lstring(va_list, char *, int);
void my_put_pointer(va_list str_print, char *str, int i);
long int my_put_lint(long int nb);
long long int my_put_llint(long long int nb);
unsigned int my_put_unnbr(unsigned int nb);
void my_putstr(char const *string);
void my_putchar(char);
int my_put_nbr(int);
char *my_revstr(unsigned char *string);
int my_strlen(const char *str);
char *my_strdup(char *string);
int my_compute_power_rec(int, int);
char *my_strcat(char *, char const *);
int check_flag(char *, int, va_list);
char convert_nb_hexa_up(char c);
char convert_nb_hexa(char c);
char *my_convert_lstring(int nbr, char *swap);

#endif /* !MY_PRINTF_H_ */