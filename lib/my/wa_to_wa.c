/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** word_array_to_word_array
*/

#include "include/my.h"

char **wa_to_wa(char **array)
{
    char **result = malloc(sizeof(char *) * sizeof(array) + 1);
    int i = 0;

    if (result == NULL) {
        free (result);
        exit (84);
    }
    for (; array[i]; ++i)
        result[i] = my_strdup(array[i]);
    result[i] = '\0';
    return (result);
}