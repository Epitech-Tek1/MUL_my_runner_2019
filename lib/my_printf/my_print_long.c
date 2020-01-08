/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_print_long
*/

#include "my_printf.h"

int my_print_long(va_list str_print, char *str, int i)
{
    if (str[i + 1] == 'i' || str[i + 1] == 'd')
        my_put_lint(va_arg(str_print, long int));
    if (str[i + 1] == 'x')
        my_print_hexa(str_print, str, i);
    if ((str[i + 1] == 'l' && str[i + 2] == 'i') || str[i + 2] == 'd') {
        my_put_llint(va_arg(str_print, long long int));
        return (i + 2);
    }
    return (i + 1);
}