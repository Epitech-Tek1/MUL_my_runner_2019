/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** my_putstrstr
*/

#include "my.h"

void my_putstrstr(char **tab)
{
    for (int i = 0; tab[i]; ++i) {
        my_putstr(tab[i]);
        my_putchar(' ');
    }
}