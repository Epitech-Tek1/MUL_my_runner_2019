/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** my_str_to_word_array
*/

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "include/my.h"

// static _Bool my_insert_to_tab(char **tab, char *str, int i)
// {
//     static int j = 0;
//     static int k = 0;

//     if (!str[i]) {
//         tab[j][k] = _END_STR_;
//         tab[j + 1] = _END_STR_;
//         return (EXIT_SUCCESS);
//     }
//     (str[i] == _END_LINE_) ? (tab[j][k] = _END_LINE_, tab[j][k + 1] = _END_STR_,
//     ++j, k = 0) : (tab[j][k] = str[i], ++k);
//     return (my_insert_to_tab(tab, str, i + 1));
// }

// static _Bool my_create_tab(char *str, char **tab, _Bool *error)
// {
//     static int i = 0;

//     if (i == 4)
//         return (my_insert_to_tab(tab, str, 0));
//     tab[i] = malloc(sizeof(char *) * 10000);
//     ++i;
//     return (tab[i - 1]) ? (my_create_tab(str, tab, 0)) : (*error = EXIT_FAILED);
// }

// _Bool my_str_to_word_array(char *filepath, char *tab[], _Bool *error)
// {
//     char *str = malloc(sizeof(char) * 200000);

//     if (!error)
//         return (*error = EXIT_ERROR);
//     my_create_tab(str, tab, error);
//     if (!error)
//         return (*error = EXIT_ERROR);
//     return (EXIT_SUCCESS);
// }

static int nb_words(char const *str)
{
    int i = 0;
    int words = 0;

    while (str[i] != '\0') {
        if (is_alphanum(str[i]) == 1)
            words += 1;
        while (is_alphanum(str[i]) == 1 && str[i] != '\0')
            i += 1;
        if (str[i] != '\0')
            i += 1;
    }
    return (words);
}

static int word_len(char const *str, int k)
{
    int len = 0;

    while (is_alphanum(str[k]) == 1) {
        k += 1;
        len += 1;
    }
    return (len);
}

static struct
{
    int i;
    int j;
    int k;
} array;

char **my_str_to_word_array(char const *str)
{
    char **array = malloc(sizeof(char *) * (nb_words(str) + 1));
    int a = 0;
    int k = 0;
    int i = 0;

    for (int i = 0; i != nb_words(str); ++i) {
        a = 0;
        for (; is_alphanum(str[k]) == 0; ++k);
        array[i] = malloc(sizeof(char) * (word_len(str, k) + 1));
        while (is_alphanum(str[k]) == 1) {
            array[i][a] = str[k];
            ++a;
            ++k;
        }
        array[i][a] = '\0';
    }
    array[i] = NULL;
    return (array);
}

// int main(int ac, char **av)
// {
//     _Bool error;
//     char **map;
//     char *str;

//     my_open_read(av[1], str, &error);
//     map = my_str_to_word_array(str);
//     for (int i = 0; map[i]; ++i)
//         printf("%s\n", map[i]);
// }