/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_print_diez
*/

#include "my_printf.h"

int my_print_diez(va_list str_print, char *str, int i)
{
    if (str[i + 1] == 'x') {
        my_putstr("0x");
        my_print_hexa(str_print, str, i);
        return (i + 1);
    }
    if (str[i + 1] == 'X') {
        my_putstr("0X");
        my_print_hexa_up(str_print, str, i);
        return (i + 1);
    }
    if (str[i + 1] == 'o') {
        my_putstr("0");
        my_print_octal(str_print, str, i);
        return (i + 1);
    }
    check_flag(str, i + 1, str_print);
    return (i);
}