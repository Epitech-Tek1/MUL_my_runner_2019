/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** quest
*/

#include "runner.h"

void quest(mario *mario, sfSprite *sprite)
{
    static sfIntRect rect;

    rect.height = 240;
    rect.width = 240;
    sfSprite_setTextureRect(sprite, rect);
    GAME._clock.quest_time = sfClock_getElapsedTime(GAME._clock.quest);
    GAME._clock.quest_seconds = GAME._clock.quest_time.microseconds / 1000000.0;
    if (GAME._clock.quest_seconds > .2) {
        rect.left += 240;
        if (rect.left == 960)
            rect.left = 0;
        sfClock_restart(GAME._clock.quest);
    }
}