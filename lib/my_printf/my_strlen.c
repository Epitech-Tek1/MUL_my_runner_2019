/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_strlen
*/

#include "my_printf.h"

int my_strlen(const char *str)
{
    int i;

    for (i = 0; str[i]; ++i);
    return (i);
}