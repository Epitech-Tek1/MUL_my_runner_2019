/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** champ
*/

#include "runner.h"

void champ(mario_t *mario, sfSprite *sprite)
{
    static sfIntRect rect;

    rect.height = 222;
    rect.width = 213;
    sfSprite_setTextureRect(sprite, rect);
    GAME._clock.champ_time = sfClock_getElapsedTime(GAME._clock.champ);
    GAME._clock.champ_seconds = GAME._clock.champ_time.microseconds / T;
    if (GAME._clock.champ_seconds > .05) {
        rect.left += (rect.left <= 1493) ? 213 : -1491;
        sfClock_restart(GAME._clock.champ);
    }
}