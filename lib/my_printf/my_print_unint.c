/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_print_unnbr
*/

#include "my_printf.h"

int my_print_unint(va_list str_print, char *str, int i)
{
    my_put_unnbr(va_arg(str_print, unsigned int));
    return (i);
}