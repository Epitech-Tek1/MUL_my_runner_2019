/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** mario
*/

#include "runner.h"

void static_mario(mario *mario)
{
    static sfIntRect rect_static;

    // read_map(mario);
    rect_static.height = 650;
    rect_static.left = 1950;
    rect_static.width = 600;
    sfSprite_setTextureRect(GAME.sprite.mario, rect_static);
    GAME.evt.time = sfClock_getElapsedTime(GAME.evt.clock);
    GAME.evt.seconds = GAME.evt.time.microseconds / 1000000.0;
    if (GAME.evt.seconds > .2) {
        printf("%d\n", rect_static.left);
        if (rect_static.left == (5850)) {
            printf("coucou\n");
            rect_static.left = 1950;
        } else {
            rect_static.left = 600000;
        }
        sfClock_restart(GAME.evt.clock);
    }
}

void event_mario(mario *mario)
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