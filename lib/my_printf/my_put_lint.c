/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_put_lint
*/

#include "my_printf.h"

long int my_put_lint(long int nb)
{
    long int nbr = 0;

    if (nb < 0) {
        my_putchar('-');
        nb *= (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            nbr = (nb % 10);
            nb = (nb - nbr) / 10;
            my_put_lint(nb);
            my_putchar(nbr + 48);
        } else
            my_putchar(48 + nb % 10);
    }
    return (nb);
}