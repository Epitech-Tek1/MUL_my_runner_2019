/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_bzero
*/

#include "include/my.h"

void my_bzero(void *string, size_t size)
{
    unsigned char *string2 = (unsigned char *)string;

    for (; size > 0; --size)
        *++string2 = '\0';
}