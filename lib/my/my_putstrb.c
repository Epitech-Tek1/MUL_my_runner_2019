/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_putstrb
*/

#include "include/my.h"

void my_putstrb(char *string)
{
    unsigned char blank = ' ';

    write(1, string, my_strlen(string));
    write(1, &blank, 1);
}