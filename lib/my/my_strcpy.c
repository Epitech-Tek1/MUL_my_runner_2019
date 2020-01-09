/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019 [WSL: Debian]
** File description:
** my_strcpy
*/

char *my_strcpy(char *dest, const char *src)
{
    char *tmp = dest;

    while ((*dest++) = (*src++));
    return (tmp);
}