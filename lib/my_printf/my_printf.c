/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include "my_printf.h"

int my_printf(char *str, ...)
{
    va_list(str_print);
    va_start(str_print, str);
    int i = 0;

    while (str[i]) {
        if ('%' == str[i])
            i = check_flag(str, i + 1, str_print);
        else
            my_putchar(str[i]);
        ++i;
    }
    va_end(str_print);
    return (0);
}