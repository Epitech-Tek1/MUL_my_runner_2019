/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** check_flag
*/

#include "my_printf.h"

int check_flag(char *str, int i, va_list str_print)
{
    int (*f_table[])(va_list, char *, int) = {my_print_string, my_print_char,
    my_print_per, my_print_int, my_print_int, my_print_hexa, my_print_pointer,
    my_print_unint, my_print_hexa_up, my_print_octal, my_print_binary,
    my_print_diez, my_print_add, my_print_sub, my_print_long, my_print_lstring};
    char flag[] = "sc%idxpuXob#+-lS";
    int n = i;

    for (int j = i; str[j] <= '9' && str[j] >= '0'; ++j)
        i = j + 1;
    i = (str[i] == ' ') ? my_print_space(i, str) : i;
    for (int n = 0; flag[n]; n++) {
        if (flag[n] == str[i]) {
            i = (*f_table[n])(str_print, str, i);
            return (i);
        }
    }
    i = RETURN_AFTER_DELETE_SPACE;
    my_putchar('%');
    return (i);
}