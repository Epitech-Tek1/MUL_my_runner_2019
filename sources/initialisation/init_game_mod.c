/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** game_mod
*/

#include "runner.h"

void intro_init(mario_t *mario)
{
    intro_create(mario);
}

void menu_init(mario_t *mario)
{
    sprite_menu_create(mario);
}

void game_init(mario_t *mario)
{
    game_create(mario);
}