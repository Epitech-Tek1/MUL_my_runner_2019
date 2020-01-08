/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** convert_nb_hexa
*/

#include "my_printf.h"

char convert_nb_hexa(char c)
{
    if (c >= '9')
        c += 39;
    return (c);
}