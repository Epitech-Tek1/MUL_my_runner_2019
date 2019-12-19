/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** init_transform
*/

#include "runner.h"

static void set_scale(mario *mario)
{
    return;
}

static void set_position(mario *mario)
{
    TRANS.position.mg.x = 0;
    TRANS.position.mg.y = 0;
    TRANS.position.mg2.x = 3840;
    TRANS.position.mg2.y = 0;
    sfSprite_setPosition(GAME.sprite.mg2, TRANS.position.mg2);
}

void game_init_transform(mario *mario)
{
    set_scale(mario);
    set_position(mario);
}