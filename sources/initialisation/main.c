/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** my_runner
*/

#include "runner.h"

int main(void)
{
    mario *mario = malloc(sizeof(mario) * 1000000);

    if (!mario)
        return (EXIT_ERROR);
    if (initialisation(mario) == 84)
        return (EXIT_ERROR);
    game_loop(mario);
    return (EXIT_SUCCESS);
}