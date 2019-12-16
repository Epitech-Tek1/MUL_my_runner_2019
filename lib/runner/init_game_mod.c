/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** game_mod
*/

#include <stdio.h>
#include <stdlib.h>
#include "runner.h"
#include "../../include/main.h"

_Bool sfInitMenu(window *window, _Bool *game_mod, _menu *_menu)
{
    sfSpriteMenuCreate(window, _menu);
    return (*game_mod = 0);
}

_Bool sfInitGame(window *window, _Bool *game_mod, _menu *_menu)
{
    printf("coucou\n");
    return (*game_mod = 1);
}