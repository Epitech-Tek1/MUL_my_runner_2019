/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** my_into_str
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

char *my_itos(unsigned nb)
{
    int tmp = 0;
    int i = 0;
    char *result = malloc(sizeof(char) * 20);

    if (nb < 0) {
        free (result);
        exit (EXIT_ERROR);
    }
    for ( i = 0; nb != 0; ++i) {
        tmp = nb % 10;
        result[i] = tmp + 48;
        nb /= 10;
    }
    result[i] = '\0';
    my_revstr((unsigned char *)result);
    return (result);
}