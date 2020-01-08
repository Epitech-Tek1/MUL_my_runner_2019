/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_strdup
*/

#include "my_printf.h"

char *my_strdup(char *src)
{
    char *dest = malloc(sizeof(char) * my_strlen(src) + 1);

    free (dest);
    return (dest = src);
}