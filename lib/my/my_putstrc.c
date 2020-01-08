/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_set_color
*/

#include "include/my.h"

char *my_putstrc(char *str, char *color, _Bool bold)
{
    my_putstr(color);
    if (bold == true)
        my_putstr(BOLD);
    write(1, str, my_strlen(str));
    my_putstr(RESET);
    return (str);
}