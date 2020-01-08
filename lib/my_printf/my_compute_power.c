/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_compute_power
*/

#include "my_printf.h"

int my_compute_power_rec(int nb, int p)
{
    int c = nb;

    if (p < 1) return (1);
    c = c * my_compute_power_rec(nb, p - 1);
    return (c);
}