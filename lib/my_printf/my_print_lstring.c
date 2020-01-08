/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_print_lstring
*/

#include "my_printf.h"

int my_print_lstring(va_list str_print, char *str, int i)
{
    char *result = malloc(sizeof(char *));
    char *swap = malloc(sizeof(char *));
    int nbr;
    int j = 0;
    char *str2 = va_arg(str_print, char *);

    for (int n = 0; str2[n]; ++n) {
        (str2[n] >= 32 && str2[n] <= 127) ? (result[j] = str2[n]) :
            (nbr = str2[n],
            result[j] = '\\',
            ++j,
            (str2[n] < 64 && str2[n] > 7) ? result[j] = '0', j++ : 0,
            (str2[n] < 8) ? (result[j] = '0', j++, result[j] = '0', j++) : 0,
            swap = my_convert_lstring(nbr, swap),
            result = my_strcat(result, my_revstr((unsigned char *)swap)),
            j += my_strlen(swap) - 1);
        ++j;
    }
    my_putstr((char const *)result);
    return (i);
}