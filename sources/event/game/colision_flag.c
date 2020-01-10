/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** colision_flag
*/

#include "runner.h"

static void colision_1(mario *mario)
{
    sfFloatRect mario_rect = SGB(GAME.sprite.mario);
    sfFloatRect flag_rect = SGB(GAME.sprite.flag);

    if (sfFloatRect_intersects(&mario_rect, &flag_rect, NULL))
        sfMusic_play(GAME.sounds.win);
}

void colision_flag(mario *mario)
{
    colision_1(mario);
}