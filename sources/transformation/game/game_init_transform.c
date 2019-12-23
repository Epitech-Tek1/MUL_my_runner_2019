/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** init_transform
*/

#include "runner.h"

static void set_scale(mario *mario)
{
    TRANS.scale.mg.x = 1.4;
    TRANS.scale.mg.y = 2;
    TRANS.scale.mario.x = .10;
    TRANS.scale.mario.y = .10;
    sfSprite_setScale(GAME.sprite.mario, TRANS.scale.mario);
    sfSprite_setScale(GAME.sprite.mg, TRANS.scale.mg);
}

static void set_position(mario *mario)
{
    TRANS.position.mg.x = 0;
    TRANS.position.mg.y = 0;
    TRANS.position.mg2.x = 1920;
    TRANS.position.mg2.y = 0;
    TRANS.position.back.y = 0;
    TRANS.position.back.x = 0;
    TRANS.position.ground.y = 640;
    TRANS.position.ground.x = 0;
    TRANS.position.mario.y = 800;
    TRANS.position.mario.x = 150;
    sfSprite_setPosition(GAME.sprite.mg, TRANS.position.mg);
    sfSprite_setPosition(GAME.sprite.mg2, TRANS.position.mg2);
    sfSprite_setPosition(GAME.sprite.back, TRANS.position.back);
    sfSprite_setPosition(GAME.sprite.ground, TRANS.position.ground);
    sfSprite_setPosition(GAME.sprite.mario, TRANS.position.mario);
}

void game_init_transform(mario *mario)
{
    set_scale(mario);
    set_position(mario);
}