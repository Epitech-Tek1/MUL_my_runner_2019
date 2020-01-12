/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** event_gif
*/

#include "runner.h"

void event_intro(mario_t *mario)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        mario->scene = 1;
        mario->const_event = 1;
        sfMusic_play(GAME.sounds.menu);
    }
    INTRO.evt.time = sfClock_getElapsedTime(INTRO.evt.clock);
    INTRO.evt.seconds = INTRO.evt.time.microseconds / 1000000.0;
    if (INTRO.evt.seconds > .08) {
        if (INTRO.texture.rect.left == 6720 && INTRO.texture.rect.top != 2700) {
            INTRO.texture.rect.top += 540;
            INTRO.texture.rect.left = 0;
        } else {
            INTRO.texture.rect.left += 960;
        }
        sfSprite_setTextureRect(INTRO.sprite.intro, INTRO.texture.rect);
        sfClock_restart(INTRO.evt.clock);

    } else if (INTRO.texture.rect.left >= 6720 &&
    INTRO.texture.rect.top == 2700) {
        mario->scene = 1;
        mario->const_event = 1;
        sfMusic_play(GAME.sounds.menu);
    }
}