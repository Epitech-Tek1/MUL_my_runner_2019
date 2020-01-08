/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** my_str_to_word_map
*/

#include "include/my.h"

static int my_getsize_file(char *filepath)
{
    struct stat stat_file;

    if (stat(filepath, &stat_file) != 0)
        return (0);
    return (stat_file.st_size);
}

static struct
{
    int i, j, k;
} inc;

char **my_file_to_word_array(char *filepath)
{
    char *file_content = malloc(sizeof(char) * my_getsize_file(filepath) + 1);
    char **content_in_array;
    inc.k = 0;

    my_open_read(filepath, file_content);
    content_in_array = malloc(sizeof(char *) * my_nbr_line(file_content, 0, 0) +
    20);
    for (inc.i = 0; file_content[inc.i]; ++inc.i) {
        content_in_array[inc.k] = malloc(sizeof(char) * 20);
        for (inc.j = 0; file_content[inc.i] != '\n' && file_content[inc.i];
        ++inc.j) {
            content_in_array[inc.k][inc.j] = file_content[inc.i];
            ++inc.i;
        }
        content_in_array[inc.k][inc.j] = '\0';
        ++inc.k;
    }
    content_in_array[inc.k] = NULL;
    return (content_in_array);
}