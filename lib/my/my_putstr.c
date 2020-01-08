/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_putstr
*/

#include "include/my.h"

void my_putstr(char const *string)
{
    write(1, string, my_strlen(string));
}