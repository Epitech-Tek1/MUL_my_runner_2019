/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** init_transform
*/

#include "runner.h"

static void assign_scale(mario_t *mario)
{
    sfSprite_setScale(GAME.sprite.ground, (sfVector2f){1.5, 1.5});
    sfSprite_setScale(GAME.sprite.ground2, (sfVector2f){1.5, 1.5});
    sfSprite_setScale(GAME.sprite.mario, (sfVector2f){.1, .1});
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

static void assign_pos_2(mario_t *mario)
{
    SETP(GAME.sprite.coin7, (sfVector2f){2030, 700});
    SETP(GAME.sprite.coin8, (sfVector2f){2030, 664});
    SETP(GAME.sprite.coin9, (sfVector2f){2030, 628});
    SETP(GAME.sprite.coin10, (sfVector2f){2063, 628});
}

static void assign_pos(mario_t *mario)
{
    SETP(GAME.sprite.mg, (sfVector2f){0, -500});
    SETP(GAME.sprite.mg2, (sfVector2f){4180, -500});
    SETP(GAME.sprite.back, (sfVector2f){0, -100});
    SETP(GAME.sprite.back2, (sfVector2f){15000, 0});
    SETP(GAME.sprite.ground, (sfVector2f){0, -500});
    SETP(GAME.sprite.ground2, (sfVector2f){6000, -500});
    SETP(GAME.sprite.mario, (sfVector2f){150, 710});
    SETP(GAME.sprite.quest, (sfVector2f){920, 620});
    SETP(GAME.sprite.quest2, (sfVector2f){960, 620});
    SETP(GAME.sprite.coin, (sfVector2f){1535, 760});
    SETP(GAME.sprite.coin2, (sfVector2f){1570, 760});
    SETP(GAME.sprite.coin3, (sfVector2f){1570, 727});
    SETP(GAME.sprite.coin4, (sfVector2f){1570, 692});
    SETP(GAME.sprite.coin5, (sfVector2f){1610, 692});
    SETP(GAME.sprite.coin6, (sfVector2f){1820, 23});
    SETP(GAME.sprite.goomba, (sfVector2f){3580, 738});
    SETP(GAME.sprite.pipe, (sfVector2f){3600, 740});
    SETP(GAME.sprite.flag, (sfVector2f){12000, 363});
    assign_pos_2(mario);
}

static void set_shape(mario_t *mario)
{
    RecShapePos(GAME._colision.ground, (sfVector2f){0, 794});
    RecShapePos(GAME._colision.mountain, (sfVector2f){1630, 738});
    RecShapePos(GAME._colision.mountain2, (sfVector2f){1615, 750});
    RecShapePos(GAME._colision.mountain3, (sfVector2f){2080, 663});
    RecShapePos(GAME._colision.mountain4, (sfVector2f){4365, 820});
    RecShapePos(GAME._colision.mountain5, (sfVector2f){2070, 680});
    RecShapePos(GAME._colision.mountstop, (sfVector2f){4500, 703});
    RecShapePos(GAME._colision.mountain6, (sfVector2f){2565, 738});
    RecShapePos(GAME._colision.pipe_top, (sfVector2f){3615, 740});
    RecShapePos(GAME._colision.pipe_left, (sfVector2f){3610, 750});
    sfRectangleShape_setSize(GAME._colision.ground, (sfVector2f){12000, 10});
    sfRectangleShape_setSize(GAME._colision.mountain, (sfVector2f){460, 10});
    sfRectangleShape_setSize(GAME._colision.mountain2, (sfVector2f){10, 40});
    sfRectangleShape_setSize(GAME._colision.mountain3, (sfVector2f){460, 10});
    sfRectangleShape_setSize(GAME._colision.mountain4, (sfVector2f){1, -100});
    sfRectangleShape_setSize(GAME._colision.mountstop, (sfVector2f){490, 10});
    sfRectangleShape_setSize(GAME._colision.mountain5, (sfVector2f){10, 55});
    sfRectangleShape_setSize(GAME._colision.mountain6, (sfVector2f){225, 10});
    sfRectangleShape_setSize(GAME._colision.pipe_top, (sfVector2f){65, 10});
    sfRectangleShape_setSize(GAME._colision.pipe_left, (sfVector2f){10, 65});
}

void game_init_transform(mario_t *mario)
{
    sfRectangleShape_setFillColor(GAME._colision.ground, sfBlack);
    sfRectangleShape_setFillColor(GAME._colision.mountain, sfRed);
    sfRectangleShape_setFillColor(GAME._colision.mountain2, sfGreen);
    sfRectangleShape_setFillColor(GAME._colision.mountain3, sfRed);
    sfRectangleShape_setFillColor(GAME._colision.mountain4, sfBlue);
    sfRectangleShape_setFillColor(GAME._colision.mountain5, sfGreen);
    sfRectangleShape_setFillColor(GAME._colision.mountain6, sfRed);
    sfRectangleShape_setFillColor(GAME._colision.pipe_top, sfRed);
    sfRectangleShape_setFillColor(GAME._colision.pipe_left, sfGreen);
    sfRectangleShape_setFillColor(GAME._colision.mountstop, sfRed);
    assign_scale(mario);
    assign_pos(mario);
    set_shape(mario);
    game_init_transform_2(mario);
}