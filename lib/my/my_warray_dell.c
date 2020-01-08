/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_warray_dell
*/

#include "include/my.h"

char **my_warray_dell(char **array, int line)
{
    int n = 0;
    int i = 0;
    char **result = malloc(sizeof(char *) * sizeof(array));

    for (int j = 0; array[j]; i++, ++j) {
        if (i == line)
            ++j;
        result[i] = malloc(sizeof(char) * 20);
        for (n = 0; array[i][n]; ++n)
            result[i][n] = array[j][n];
        result[i][n] = '\0';
    }
    result[i] = '\0';
    return (result);
}