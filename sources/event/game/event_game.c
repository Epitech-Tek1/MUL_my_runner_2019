/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** event_game
*/

#include "runner.h"

static void event_mario(mario *mario)
{
    static sfIntRect rect;

    rect.height = 650;
    rect.width = 600;
    sfSprite_setTextureRect(GAME.sprite.mario, rect);
    GAME.evt.time = sfClock_getElapsedTime(GAME.evt.clock);
    GAME.evt.seconds = GAME.evt.time.microseconds / 1000000.0;
    if (GAME.evt.seconds > .07) {
        rect.left += (rect.left <= 6000) ? 650 : -6500;
        sfClock_restart(GAME.evt.clock);
    }
}

void event_game(mario *mario)
{
    event_map(mario);
    sfVector2f init_pos = {1920, 0};
    sfVector2f ground_move = {-6, 0};
    sfVector2f mg_move = {-2.5, 0};
    sfVector2f back_move = {-1, 0};

    event_mario(mario);
    sfSprite_move(GAME.sprite.ground, ground_move);
    sfSprite_move(GAME.sprite.mg, mg_move);
    sfSprite_move(GAME.sprite.mg2, mg_move);
    sfSprite_move(GAME.sprite.back, back_move);
    if (sfSprite_getPosition(GAME.sprite.mg).x == 0)
        sfSprite_setPosition(GAME.sprite.mg2, init_pos);
    if (sfSprite_getPosition(GAME.sprite.mg2).x == 0)
        sfSprite_setPosition(GAME.sprite.mg, init_pos);
}