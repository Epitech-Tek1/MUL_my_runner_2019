/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_convert_lstring
*/

#include "my_printf.h"

char *my_convert_lstring(int nbr, char *swap)
{
    for (int k = 0; nbr >= 1; ++k) {
        swap[k] = (nbr % 8) + 48;
        nbr /= 8;
    }
    return (swap);
}