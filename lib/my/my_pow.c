/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my_compute_power
*/

int my_pow(int nb, int p)
{
    int c = nb;

    if (p < 1) return (1);
    c = c * my_pow(nb, p - 1);
    return (c);
}