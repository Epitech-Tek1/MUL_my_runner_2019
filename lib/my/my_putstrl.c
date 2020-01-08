/*
** EPITECH PROJECT, 2020
** my
** File description:
** my_putstrl
*/

#include "include/my.h"

void my_putstrl(char const *string)
{
    unsigned char new_line = '\n';

    write(1, string, my_strlen(string));
    write(1, &new_line, 1);
}