/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** init_transform
*/

#include "runner.h"

static void assign_scale(mario *mario)
{
    sfSprite_setScale(GAME.sprite.ground, (sfVector2f){1.5, 1.5});
    sfSprite_setScale(GAME.sprite.ground2, (sfVector2f){1.5, 1.5});
    sfSprite_setScale(GAME.sprite.mario, (sfVector2f){.13, .13});
    sfSprite_setScale(GAME.sprite.mg, (sfVector2f){1.5, 1.5});
    sfSprite_setScale(GAME.sprite.mg2, (sfVector2f){1.5, 1.5});
    sfSprite_setScale(GAME.sprite.quest, (sfVector2f){.17, .17});
    sfSprite_setScale(GAME.sprite.quest2, (sfVector2f){.17, .17});
    sfSprite_setScale(GAME.sprite.coin, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin2, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin3, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin4, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin5, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin6, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.goomba, (sfVector2f){.2, .2});
}

static void assign_pos(mario *mario)
{
    sfSprite_setPosition(GAME.sprite.mg, (sfVector2f){0, -500});
    sfSprite_setPosition(GAME.sprite.mg2, (sfVector2f){4180, -500});
    sfSprite_setPosition(GAME.sprite.back, (sfVector2f){0, -100});
    sfSprite_setPosition(GAME.sprite.back2, (sfVector2f){15000, 0});
    sfSprite_setPosition(GAME.sprite.ground, (sfVector2f){0, -500});
    sfSprite_setPosition(GAME.sprite.ground2, (sfVector2f){6000, -500});
    sfSprite_setPosition(GAME.sprite.mario, (sfVector2f){150, 710});
    sfSprite_setPosition(GAME.sprite.quest, (sfVector2f){920, 620});
    sfSprite_setPosition(GAME.sprite.quest2, (sfVector2f){960, 620});
    sfSprite_setPosition(GAME.sprite.coin, (sfVector2f){1535, 760});
    sfSprite_setPosition(GAME.sprite.coin2, (sfVector2f){1570, 760});
    sfSprite_setPosition(GAME.sprite.coin3, (sfVector2f){1570, 727});
    sfSprite_setPosition(GAME.sprite.coin4, (sfVector2f){1570, 692});
    sfSprite_setPosition(GAME.sprite.coin5, (sfVector2f){1610, 692});
    sfSprite_setPosition(GAME.sprite.coin6, (sfVector2f){1820, 23});
    sfSprite_setPosition(GAME.sprite.goomba, (sfVector2f){1300, 738});
}

void game_init_transform(mario *mario)
{
    assign_scale(mario);
    assign_pos(mario);
}