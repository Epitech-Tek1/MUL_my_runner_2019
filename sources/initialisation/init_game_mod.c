/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** game_mod
*/

#include "runner.h"

void intro_init(mario *mario)
{
    intro_create(mario);
}

_Bool sfInitMenu(mario *mario)
{
    sfSpriteMenuCreate(mario);
    return (true);
}

_Bool sfInitGame(mario *mario)
{
    return (true);
}