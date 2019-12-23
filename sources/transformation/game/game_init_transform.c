/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** init_transform
*/

#include "runner.h"

static void set_scale(mario *mario)
{
    TRANS.scale.mg.x = 1.5;
    TRANS.scale.mg.y = 1.5;
    TRANS.scale.mg2.x = 1.5;
    TRANS.scale.mg2.y = 1.5;
    TRANS.scale.mario.x = .13;
    TRANS.scale.mario.y = .13;
    TRANS.scale.quest.x = .17;
    TRANS.scale.quest.y = .17;
    sfSprite_setScale(GAME.sprite.mario, TRANS.scale.mario);
    sfSprite_setScale(GAME.sprite.mg, TRANS.scale.mg);
    sfSprite_setScale(GAME.sprite.mg2, TRANS.scale.mg2);
    sfSprite_setScale(GAME.sprite.quest, TRANS.scale.quest);
    sfSprite_setScale(GAME.sprite.quest2, TRANS.scale.quest);
}

static void set_position(mario *mario)
{
    TRANS.position.mg.x = 0;
    TRANS.position.mg.y = 60;
    TRANS.position.mg2.x = 7920;
    TRANS.position.mg2.y = 60;
    TRANS.position.back.y = -200;
    TRANS.position.back.x = 0;
    TRANS.position.ground.y = 640;
    TRANS.position.ground.x = 0;
    TRANS.position.mario.y = 630;
    TRANS.position.mario.x = 150;
    TRANS.position.quest.x = 920;
    TRANS.position.quest.y = 540;
    TRANS.position.quest2.x = 960;
    TRANS.position.quest2.y = 540;
    sfSprite_setPosition(GAME.sprite.mg, TRANS.position.mg);
    sfSprite_setPosition(GAME.sprite.mg2, TRANS.position.mg2);
    sfSprite_setPosition(GAME.sprite.back, TRANS.position.back);
    sfSprite_setPosition(GAME.sprite.ground, TRANS.position.ground);
    sfSprite_setPosition(GAME.sprite.mario, TRANS.position.mario);
    sfSprite_setPosition(GAME.sprite.quest, TRANS.position.quest);
    sfSprite_setPosition(GAME.sprite.quest2, TRANS.position.quest2);
}

void game_init_transform(mario *mario)
{
    set_scale(mario);
    set_position(mario);
}