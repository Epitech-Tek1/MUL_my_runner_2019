/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_strlen
*/

#include "include/my.h"

int my_strlen(const char *str)
{
    int i;

    if (str == NULL)
        my_putstrc("[ ERROR ] String is NULL\n", RED, true);
    for (i = 0; str[i]; ++i);
    return (i);
}