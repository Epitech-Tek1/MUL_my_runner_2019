/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** quest
*/

#include "runner.h"

void quest(mario_t *mario, sfSprite *sprite)
{
    static sfIntRect rect = {0, 0, 240, 240};

    sfSprite_setTextureRect(sprite, rect);
    GAME._clock.quest_time = sfClock_getElapsedTime(GAME._clock.quest);
    GAME._clock.quest_seconds = GAME._clock.quest_time.microseconds / T;
    if (GAME._clock.quest_seconds > .4) {
        rect.left += (rect.left == 720) ? -720 : 240;
        sfClock_restart(GAME._clock.quest);
    }
}