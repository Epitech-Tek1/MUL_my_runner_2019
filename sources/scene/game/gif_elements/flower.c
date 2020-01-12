/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** flower
*/

#include "runner.h"

void flower(mario_t *mario, sfSprite *sprite)
{
    static sfIntRect rect = {13, 0, 3005/ 17, 260};

    sfSprite_setTextureRect(sprite, rect);
    GAME._clock.flower_time = sfClock_getElapsedTime(GAME._clock.flower);
    GAME._clock.flower_seconds = GAME._clock.flower_time.microseconds / T;
    if (GAME._clock.flower_seconds > .2) {
        if (rect.left >= 2596)
            rect.left = 13;
        else
            rect.left += 172;
        sfClock_restart(GAME._clock.flower);
    }
}