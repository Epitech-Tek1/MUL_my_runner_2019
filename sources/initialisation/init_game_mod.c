/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** game_mod
*/

#include "runner.h"

_Bool sfInitMenu(mario *mario)
{
    sfSpriteMenuCreate(mario);
    return (true);
}

_Bool sfInitGame(mario *mario)
{
    printf("In game\n");
    return (true);
}