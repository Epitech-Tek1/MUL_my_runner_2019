/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** event_game
*/

#include "runner.h"

static void paralax(mario *mario)
{
    sfVector2f init_pos = {6000 + 1920, -500};
    sfVector2f ground_pos = {6000 + 1920, -500};
    sfVector2f back = {15000, 0};

    if (sfSprite_getPosition(GAME.sprite.mg).x == 0)
        sfSprite_setPosition(GAME.sprite.mg2, init_pos);
    if (sfSprite_getPosition(GAME.sprite.mg2).x == 0)
        sfSprite_setPosition(GAME.sprite.mg, init_pos);
    if (sfSprite_getPosition(GAME.sprite.ground).x == 0)
        sfSprite_setPosition(GAME.sprite.ground2, ground_pos);
    if (sfSprite_getPosition(GAME.sprite.ground2).x == 0)
        sfSprite_setPosition(GAME.sprite.ground, ground_pos);
    if (sfSprite_getPosition(GAME.sprite.back).x == 0)
        sfSprite_setPosition(GAME.sprite.back2, back);
    if (sfSprite_getPosition(GAME.sprite.back2).x == 0)
        sfSprite_setPosition(GAME.sprite.back, back);
}

void move(mario *mario)
{
    sfVector2f ground_move = {-6, 0}; // avance de 360px/sec
    sfVector2f mg_move = {-2, 0};
    sfVector2f back_move = {-30, 0};

    event_mario(mario);
    sfSprite_move(GAME.sprite.ground, ground_move);
    sfSprite_move(GAME.sprite.ground2, ground_move);
    sfSprite_move(GAME.sprite.coin, ground_move);
    sfSprite_move(GAME.sprite.coin2, ground_move);
    sfSprite_move(GAME.sprite.coin3, ground_move);
    sfSprite_move(GAME.sprite.coin4, ground_move);
    sfSprite_move(GAME.sprite.coin5, ground_move);
    sfSprite_move(GAME.sprite.coin6, ground_move);
    sfSprite_move(GAME.sprite.quest, ground_move);
    sfSprite_move(GAME.sprite.quest2, ground_move);
    sfSprite_move(GAME.sprite.mg, mg_move);
    sfSprite_move(GAME.sprite.mg2, mg_move);
    sfSprite_move(GAME.sprite.back, back_move);
    sfSprite_move(GAME.sprite.back2, back_move);
    paralax(mario);
}

void event_game(mario *mario)
{

}