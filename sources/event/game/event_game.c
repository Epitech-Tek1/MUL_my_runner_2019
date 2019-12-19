/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** event_game
*/

#include "runner.h"

void event_game(mario *mario)
{
    sfVector2f mg_move = {-4, 0};
    sfSprite_move(GAME.sprite.mg, mg_move);
}