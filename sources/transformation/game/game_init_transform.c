/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** init_transform
*/

#include "runner.h"

static void assign_scale(mario *mario)
{
    sfSprite_setScale(GAME.sprite.ground, TRANS.scale.ground);
    sfSprite_setScale(GAME.sprite.ground2, TRANS.scale.ground);
    sfSprite_setScale(GAME.sprite.mario, TRANS.scale.mario);
    sfSprite_setScale(GAME.sprite.mg, TRANS.scale.mg);
    sfSprite_setScale(GAME.sprite.mg2, TRANS.scale.mg2);
    sfSprite_setScale(GAME.sprite.quest, TRANS.scale.quest);
    sfSprite_setScale(GAME.sprite.quest2, TRANS.scale.quest);
    sfSprite_setScale(GAME.sprite.coin, TRANS.scale.coin);
    sfSprite_setScale(GAME.sprite.coin2, TRANS.scale.coin);
    sfSprite_setScale(GAME.sprite.coin3, TRANS.scale.coin);
    sfSprite_setScale(GAME.sprite.coin4, TRANS.scale.coin);
    sfSprite_setScale(GAME.sprite.coin5, TRANS.scale.coin);
    sfSprite_setScale(GAME.sprite.coin6, TRANS.scale.coin);
    sfSprite_setScale(GAME.sprite.goomba, TRANS.scale.goomba);
}

static void set_scale(mario *mario)
{
    TRANS.scale.ground = (sfVector2f){1.5, 1.5};
    TRANS.scale.mg = (sfVector2f){1.5, 1.5};
    TRANS.scale.mg2 = (sfVector2f){1.5, 1.5};
    TRANS.scale.mario = (sfVector2f){.13, .13};
    TRANS.scale.quest = (sfVector2f){.17, .17};
    TRANS.scale.coin = (sfVector2f){.25, .25};
    TRANS.scale.goomba = (sfVector2f){.5, .5};
    assign_scale(mario);
}

static void assign_pos2(mario *mario)
{
    TRANS.position.coin = (sfVector2f){1535, 760};
    TRANS.position.coin2 = (sfVector2f){1570, 760};
    TRANS.position.coin3 = (sfVector2f){1570, 727};
    TRANS.position.coin4 = (sfVector2f){1570, 692};
    TRANS.position.coin5 = (sfVector2f){1610, 692};
    TRANS.position.coin6 = (sfVector2f){1820, 23};
    TRANS.position.goomba = (sfVector2f){800, 750};
}

static void assign_pos(mario *mario)
{
    assign_pos2(mario);
    sfSprite_setPosition(GAME.sprite.mg, TRANS.position.mg);
    sfSprite_setPosition(GAME.sprite.mg2, TRANS.position.mg2);
    sfSprite_setPosition(GAME.sprite.back, TRANS.position.back);
    sfSprite_setPosition(GAME.sprite.back2, TRANS.position.back2);
    sfSprite_setPosition(GAME.sprite.ground, TRANS.position.ground);
    sfSprite_setPosition(GAME.sprite.ground2, TRANS.position.ground2);
    sfSprite_setPosition(GAME.sprite.mario, TRANS.position.mario);
    sfSprite_setPosition(GAME.sprite.quest, TRANS.position.quest);
    sfSprite_setPosition(GAME.sprite.quest2, TRANS.position.quest2);
    sfSprite_setPosition(GAME.sprite.coin, TRANS.position.coin);
    sfSprite_setPosition(GAME.sprite.coin2, TRANS.position.coin2);
    sfSprite_setPosition(GAME.sprite.coin3, TRANS.position.coin3);
    sfSprite_setPosition(GAME.sprite.coin4, TRANS.position.coin4);
    sfSprite_setPosition(GAME.sprite.coin5, TRANS.position.coin5);
    sfSprite_setPosition(GAME.sprite.coin6, TRANS.position.coin6);
    sfSprite_setPosition(GAME.sprite.goomba, TRANS.position.goomba);
}

static void set_position(mario *mario)
{
    TRANS.position.mg = (sfVector2f){0, -500};
    TRANS.position.mg2 = (sfVector2f){4180, -500};
    TRANS.position.back = (sfVector2f){0, -100};
    TRANS.position.back2 = (sfVector2f){15000, 0};
    TRANS.position.ground = (sfVector2f){0, -500};
    TRANS.position.ground2 = (sfVector2f){6000, -500};
    TRANS.position.mario = (sfVector2f){150, 710};
    TRANS.position.quest = (sfVector2f){920, 620};
    TRANS.position.quest2 = (sfVector2f){960, 620};
    assign_pos(mario);
}

void game_init_transform(mario *mario)
{
    set_scale(mario);
    set_position(mario);
}