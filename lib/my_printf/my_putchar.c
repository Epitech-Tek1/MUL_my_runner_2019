/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_putchar
*/

#include "my_printf.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}