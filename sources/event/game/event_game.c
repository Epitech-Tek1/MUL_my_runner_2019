/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** event_game
*/

#include "runner.h"

void move(mario *mario)
{
    sfVector2f init_pos = {6000, 60};
    sfVector2f ground_move = {-6, 0};
    sfVector2f mg_move = {-2.5, 0};
    sfVector2f back_move = {-1, 0};

    event_mario(mario);
    sfSprite_move(GAME.sprite.ground, ground_move);
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
    if (sfSprite_getPosition(GAME.sprite.mg).x == 0)
        sfSprite_setPosition(GAME.sprite.mg2, init_pos);
    if (sfSprite_getPosition(GAME.sprite.mg2).x == 0)
        sfSprite_setPosition(GAME.sprite.mg, init_pos);
}

void event_game(mario *mario)
{
}