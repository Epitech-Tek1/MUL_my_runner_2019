/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_print_pointer
*/

#include "my_printf.h"

int my_print_pointer(va_list str_print, char *str, int i)
{
    my_putstr("0x");
    my_put_pointer(str_print, str, i);
    return (i);
}