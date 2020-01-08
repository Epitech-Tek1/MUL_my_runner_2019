/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_print_string
*/

#include "my_printf.h"

int my_print_string(va_list str_print, char *str, int i)
{
    my_putstr(va_arg(str_print, char *));
    return (i);
}