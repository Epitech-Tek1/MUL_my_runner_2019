/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** Swap two elements
*/

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}