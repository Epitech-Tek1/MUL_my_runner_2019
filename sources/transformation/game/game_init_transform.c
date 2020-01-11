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
    sfSprite_setScale(GAME.sprite.coin7, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin8, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin9, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.coin10, (sfVector2f){.25, .25});
    sfSprite_setScale(GAME.sprite.goomba, (sfVector2f){.2, .2});
    sfSprite_setScale(GAME.sprite.pipe, (sfVector2f){.6, .6});
    sfSprite_setScale(GAME.sprite.flag, (sfVector2f){.9, .9});
}

static void assign_pos_2(mario *mario)
{
    SetPos(GAME.sprite.coin7, (sfVector2f){2030, 700});
    SetPos(GAME.sprite.coin8, (sfVector2f){2030, 664});
    SetPos(GAME.sprite.coin9, (sfVector2f){2030, 628});
    SetPos(GAME.sprite.coin10, (sfVector2f){2063, 628});
}

static void assign_pos(mario *mario)
{
    SetPos(GAME.sprite.mg, (sfVector2f){0, -500});
    SetPos(GAME.sprite.mg2, (sfVector2f){4180, -500});
    SetPos(GAME.sprite.back, (sfVector2f){0, -100});
    SetPos(GAME.sprite.back2, (sfVector2f){15000, 0});
    SetPos(GAME.sprite.ground, (sfVector2f){0, -500});
    SetPos(GAME.sprite.ground2, (sfVector2f){6000, -500});
    SetPos(GAME.sprite.mario, (sfVector2f){150, 710});
    SetPos(GAME.sprite.quest, (sfVector2f){920, 620});
    SetPos(GAME.sprite.quest2, (sfVector2f){960, 620});
    SetPos(GAME.sprite.coin, (sfVector2f){1535, 760});
    SetPos(GAME.sprite.coin2, (sfVector2f){1570, 760});
    SetPos(GAME.sprite.coin3, (sfVector2f){1570, 727});
    SetPos(GAME.sprite.coin4, (sfVector2f){1570, 692});
    SetPos(GAME.sprite.coin5, (sfVector2f){1610, 692});
    SetPos(GAME.sprite.coin6, (sfVector2f){1820, 23});
    SetPos(GAME.sprite.goomba, (sfVector2f){3580, 738});
    SetPos(GAME.sprite.pipe, (sfVector2f){3600, 740});
    SetPos(GAME.sprite.flag, (sfVector2f){12000, 363});
    assign_pos_2(mario);
}

static void set_shape(mario *mario)
{
    RecShapePos(GAME._colision.ground, (sfVector2f){0, 794});
    RecShapePos(GAME._colision.mountain, (sfVector2f){1630, 738});
    RecShapePos(GAME._colision.mountain2, (sfVector2f){1615, 738});
    RecShapePos(GAME._colision.mountain3, (sfVector2f){2080, 663});
    RecShapePos(GAME._colision.mountain4, (sfVector2f){4338, 780});
    RecShapePos(GAME._colision.mountain5, (sfVector2f){2070, 680});
    RecShapePos(GAME._colision.mountain6, (sfVector2f){2565, 738});
    sfRectangleShape_setSize(GAME._colision.ground, (sfVector2f){10000, 10});
    sfRectangleShape_setSize(GAME._colision.mountain, (sfVector2f){460, 10});
    sfRectangleShape_setSize(GAME._colision.mountain, (sfVector2f){460, 10});
    sfRectangleShape_setSize(GAME._colision.mountain2, (sfVector2f){10, 55});
    sfRectangleShape_setSize(GAME._colision.mountain3, (sfVector2f){460, 10});
    sfRectangleShape_setSize(GAME._colision.mountain4, (sfVector2f){10, 10});
    sfRectangleShape_setSize(GAME._colision.mountain5, (sfVector2f){10, 55});
    sfRectangleShape_setSize(GAME._colision.mountain6, (sfVector2f){230, 10});
}

void game_init_transform(mario *mario)
{
    sfRectangleShape_setFillColor(GAME._colision.ground, sfBlack);
    sfRectangleShape_setFillColor(GAME._colision.mountain, sfRed);
    sfRectangleShape_setFillColor(GAME._colision.mountain2, sfGreen);
    sfRectangleShape_setFillColor(GAME._colision.mountain3, sfRed);
    sfRectangleShape_setFillColor(GAME._colision.mountain4, sfBlue);
    sfRectangleShape_setFillColor(GAME._colision.mountain5, sfGreen);
    sfRectangleShape_setFillColor(GAME._colision.mountain6, sfRed);
    assign_scale(mario);
    assign_pos(mario);
    set_shape(mario);
    game_init_transform_2(mario);
}