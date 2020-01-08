/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** convert_nb_hexa_up
*/

#include "my_printf.h"

char convert_nb_hexa_up(char c)
{
    if (c >= '9')
        c += 7;
    return (c);
}