/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_strcat
*/

#include "include/my.h"

char *my_strcat(char *dest, const char *src)
{
    char *tmp = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));
    int i = my_strlen(dest);

    tmp = my_strcpy(tmp, dest);
    for (int n = 0; src[n]; ++n)
        tmp[i++] = src[n];
    tmp[i] = '\0';
    return (tmp);
}