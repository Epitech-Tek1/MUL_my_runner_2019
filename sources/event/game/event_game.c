/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** event_game
*/

#include "runner.h"

void event_game(mario *mario)
{
    sfVector2f init_pos = {3840, 0};
    sfVector2f mg_move = {-4, 0};

    sfSprite_move(GAME.sprite.mg, mg_move);
    sfSprite_move(GAME.sprite.mg2, mg_move);
    if (sfSprite_getPosition(GAME.sprite.mg).x == 0)
        sfSprite_setPosition(GAME.sprite.mg2, init_pos);
    if (sfSprite_getPosition(GAME.sprite.mg2).x == 0)
        sfSprite_setPosition(GAME.sprite.mg, init_pos);
}