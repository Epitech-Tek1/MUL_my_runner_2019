/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** goomba
*/

#include "runner.h"

void goomba(mario *mario, sfSprite *sprite)
{
    static sfIntRect rect;

    rect.height = 87;
    rect.width = 101;
    sfSprite_setTextureRect(sprite, rect);
    GAME._clock.goomba_time = sfClock_getElapsedTime(GAME._clock.goomba);
    GAME._clock.goomba_seconds = GAME._clock.goomba_time.microseconds / 1000000.0;
    if (GAME._clock.goomba_seconds > 2) {
        rect.left += 101;
        if (rect.left == 606){
            rect.left = 0;
            rect.top = 0;
        }
        sfClock_restart(GAME._clock.goomba);
    }
}