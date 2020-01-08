/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_put_llint
*/

#include "my_printf.h"

long long int my_put_llint(long long int nb)
{
    long long int nbr = 0;

    if (nb < 0) {
        my_putchar('-');
        nb *= (-1);
    }
    if (nb >= 0) {
        if (nb >= 10) {
            nbr = (nb % 10);
            nb = (nb - nbr) / 10;
            my_put_llint(nb);
            my_putchar(nbr + 48);
        } else
            my_putchar(48 + nb % 10);
    }
    return (nb);
}