/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_print_space
*/

#include "my_printf.h"

int my_print_space(int i, char *str)
{
    if (str[i] != ' ')
        return (i);
    return my_print_space(i + 1, str);
}