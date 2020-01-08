/*
** EPITECH PROJECT, 2020
** PSU_my_ls_2019
** File description:
** my_sort_tab
*/

#include "include/my.h"

typedef struct
{
    int i;
    int j;
    int pivot;
    char *tmp;
} qsort_s;

static void process(qsort_s *qsort, char **array, int last)
{
    while (qsort->i < qsort->j) {
        for (; (my_ctoi(array[qsort->i][0]) <=
        my_ctoi(array[qsort->pivot][0]) && qsort->i < last); ++qsort->i);
        for (;  my_ctoi(array[qsort->j][0]) >
        my_ctoi(array[qsort->pivot][0]); --qsort->j);
        if (qsort->i < qsort->j) {
            qsort->tmp = array[qsort->i];
            array[qsort->i] = array[qsort->j];
            array[qsort->j] = qsort->tmp;
        }
    }
}

void my_qsort(char **array, int first, int last)
{
    qsort_s *qsort_s = malloc(sizeof(qsort_s) * 4);

    if (first < last) {
        qsort_s->pivot = first;
        qsort_s->i = first;
        qsort_s->j = last;
        process(qsort_s, array, last);
        qsort_s->tmp = array[qsort_s->pivot];
        array[qsort_s->pivot] = array[qsort_s->j];
        array[qsort_s->j] = qsort_s->tmp;
        my_qsort(array, first, qsort_s->j - 1);
        my_qsort(array, qsort_s->j + 1, last);
    }
    free (qsort_s);
}