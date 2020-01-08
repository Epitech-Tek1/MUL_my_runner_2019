/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** Convert a string to a double
*/

#include "include/my.h"

double my_atof(const char *str)
{
    int i = -1;
    int minus = 1;
    double res = 0;
    double decimal = 0;

    for (; str[++i] == '-'; minus *= -1);
    for (; is_alphanum(str[i]) && str[i]; res = res * 10 + (str[i++] - '0'));
    i += (str[i] == '.') ? 1 : 0;
    for (; is_alphanum(str[i]) && str[i]; ++i)
        decimal = decimal * 10 + (str[i] - '0');
    for (; decimal > 1; decimal /= 10);
    return ((res + decimal) * minus);
}