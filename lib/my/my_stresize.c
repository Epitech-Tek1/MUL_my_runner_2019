/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_str_resize
*/

#include "include/my.h"

char *my_stresize(char *string, size_t beg, size_t end)
{
    char *result = malloc(sizeof(char) * my_strlen(string));
    int i;

    for (i = 0; beg++ != end; ++i)
        result[i] = string[beg];
    result[i] = '\0';
    return (result);
}