/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_putstr
*/

#include "my_printf.h"

void my_putstr(char const *string)
{
    write(1, string, my_strlen(string));
}