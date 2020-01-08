/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** my_open_read
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"

int my_open_read(char *filepath, char *str)
{
    int fd = open(filepath, O_RDONLY);
    int size = 0;
    int i = 0;

    if (fd == -1) {
        my_putstr("[ ERROR ] An error occurred while reading the file");
        return (EXIT_ERROR);
    }
    for (char c; read(fd, &c, 1) != _END_STR_; ++size) {
        if (c == _END_LINE_)
            ++i;
        str[size] = c;
    }
    str[size] = _END_STR_;
    close(fd);
    return (EXIT_SUCCESS);
}