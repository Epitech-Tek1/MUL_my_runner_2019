/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** quest
*/

#include "runner.h"

void quest(mario_t *mario, sfSprite *sprite)
{
    static sfIntRect rect;

    rect.height = 232;
    rect.width = 231;
    sfSprite_setTextureRect(sprite, rect);
    GAME._clock.coin_time = sfClock_getElapsedTime(GAME._clock.coin);
    GAME._clock.coin_seconds = GAME._clock.coin_time.microseconds / 1000000.0;
    if (GAME._clock.coin_seconds > .05) {
        rect.left += 231;
        if (rect.left == 7161)
            rect.left = 0;
        sfClock_restart(GAME._clock.coin);
    }
}