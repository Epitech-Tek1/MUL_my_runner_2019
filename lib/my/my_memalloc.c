/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_memalloc
*/

#include "include/my.h"

void *my_memalloc(size_t size)
{
    void *mem = malloc(size);

    if (mem) {
        my_bzero(mem, size);
        return (mem);
    } else
        return (NULL);
}