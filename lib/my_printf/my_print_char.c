/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_print_char
*/

#include "my_printf.h"

int my_print_char(va_list str_print, char *str, int i)
{
    my_putchar(va_arg(str_print, int));
    return (i);
}