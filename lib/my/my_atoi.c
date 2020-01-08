/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** Convert a string to an integer
*/

#include "include/my.h"

int my_atoi(char *string)
{
    register int result = 0;
    register unsigned int digit;
    char sign = string[0];

    if (*string == '-')
        ++string;
    else
        if (*string == '+')
            ++string;
    for (; ; ++string) {
        digit = *string - '0';
        if (digit > 9)
            break;
        result = (10 * result) + digit;
    }
    if (sign == '-')
        return -(result);
    return (result);
}