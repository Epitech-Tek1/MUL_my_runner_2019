/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_put_unnbr
*/

#include "my_printf.h"

unsigned int my_put_unnbr(unsigned int nb)
{
    unsigned int nbr = 0;

    if (nb < 0) {
        my_putchar('-');
        nb *= (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            nbr = (nb % 10);
            nb = (nb - nbr) / 10;
            my_put_unnbr(nb);
            my_putchar(nbr + 48);
        } else
            my_putchar(48 + nb % 10);
    }
    return (nb);
}