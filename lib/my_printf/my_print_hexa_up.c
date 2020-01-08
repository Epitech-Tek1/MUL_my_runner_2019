/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_print_hexa_up
*/

#include "my_printf.h"

int my_print_hexa_up(va_list str_print, char *str, int i)
{
    char *str2 = malloc(sizeof(char *));
    unsigned int nbr = va_arg(str_print, unsigned int);

    if (!str2)
        exit(EXIT_FAILURE);
    if (nbr == 0)
        my_putchar('0');
    for (int i = 0; nbr >= 1; ++i) {
        str2[i] = (nbr % 16) + 48;
        if (str2[i] > '9')
            str2[i] = convert_nb_hexa_up(str2[i]);
        nbr /= 16;
    }
    my_putstr(my_revstr((unsigned char *)str2));
    free (str2);
    return (i);
}