/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_print_int
*/

#include "my_printf.h"

int my_print_int(va_list str_print, char *str, int i)
{
    my_put_nbr(va_arg(str_print, int));
    return (i);
}