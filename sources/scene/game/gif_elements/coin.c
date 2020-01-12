/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** coin
*/

#include "runner.h"

void coin(mario_t *mario, sfSprite *sprite)
{
    static sfIntRect rect;

    rect.height = 128;
    rect.width = 128;
    sfSprite_setTextureRect(sprite, rect);
    GAME._clock.coin_time = sfClock_getElapsedTime(GAME._clock.coin);
    GAME._clock.coin_seconds = GAME._clock.coin_time.microseconds / 1000000.0;
    if (GAME._clock.coin_seconds > .1) {
        rect.left += 128;
        if (rect.left == 2048) {
            rect.left = 0;
            rect.top = 128;
        }
        if (rect.left == 512 && rect.top == 128){
            rect.left = 0;
            rect.top = 0;
        }
        sfClock_restart(GAME._clock.coin);
    }
}