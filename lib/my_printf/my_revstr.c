/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_revstr
*/

#include "my_printf.h"

char *my_revstr(unsigned char *string)
{
    int i;
    int j;
    unsigned char a;
    unsigned len = my_strlen((const char *)string);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        a = string[i];
        string[i] = string[j];
        string[j] = a;
    }
    return ((char *)string);
}