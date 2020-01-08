/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_sort_tab
*/

#include "include/my.h"

static void swap(int *a, int *b, char **str1_ptr, char **str2_ptr)
{
    int tmp = *b;
    char *temp = *str2_ptr;

    *b = *a;
    *str2_ptr = *str1_ptr;
    *a = tmp;
    *str1_ptr = temp;
}

static void comparison(int *array, char **av)
{
    for (int i = 0; array[i]; ++i)
        for (int n = 0; array[n]; ++n)
            if (array[i] < array[n]) {
                swap(&array[i], &array[n], &av[i], &av[n]);
                for (int z = 0; av[z]; ++z) {
                }
            }
}

int main(int ac, char **av)
{
    int *arr = malloc(sizeof(av));

    my_putstrstr(av);
    my_putchar('\n');
    av = my_warray_dell(av, 0);
    my_putstrstr(av);
    for (int i = 0; av[i]; ++i) {
        arr[i] = my_ctoi(av[i][0]);
    }
    comparison(arr, av);
}