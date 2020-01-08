/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_put_pointer
*/

#include "my_printf.h"

void my_put_pointer(va_list str_print, char *str, int i)
{
    char *str2 = NULL;
    str2 = malloc(sizeof(char *));
    unsigned long long int nbr = va_arg(str_print, unsigned long long int);

    if (!str2)
        exit(EXIT_FAILURE);
    if (nbr == 0)
        my_putchar('0');
    for (int i = 0; nbr >= 1; ++i) {
        str2[i] = (nbr % 16) + 48;
        if (str2[i] > '9')
            str2[i] = convert_nb_hexa(str2[i]);
        nbr /= 16;
    }
    my_putstr(my_revstr((unsigned char *)str2));
    free (str2);
}