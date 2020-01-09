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

    rect.height = 300;
    rect.width = 375;
    sfSprite_setTextureRect(sprite, rect);
    GAME._clock.goomba_time = sfClock_getElapsedTime(GAME._clock.goomba);
    GAME._clock.goomba_seconds = GAME._clock.goomba_time.microseconds /
    1000000.0;
    if (GAME._clock.goomba_seconds > .1) {
        rect.left += rect.width;
        if (rect.left == 2625 && rect.top == 0) {
            rect.left = 0;
            rect.top = 300;
        }
        if (rect.left == 2625 && rect.top == 300){
            rect.left = 0;
            rect.top = 0;
        }
        sfClock_restart(GAME._clock.goomba);
    }
}