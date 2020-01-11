/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** colision_flag
*/

#include "runner.h"

static void colision_1(mario *mario)
{
    if (GAME._clock.end_seconds == 0)
        GAME._clock.end_clock = sfClock_create();
    GAME._clock.end_time = sfClock_getElapsedTime(GAME._clock.end_clock);
    GAME._clock.end_seconds = GAME._clock.end_time.microseconds / 1000000.0;
    if (mario->is_end == true) {
        if (GAME.catch == true) {
            sfMusic_destroy(GAME.sounds.lvl);
            sfMusic_play(GAME.sounds.win);
            GAME.catch = false;
        }
        if (GAME._clock.end_seconds >= (double)5) {
            GAME.screen_win = true;
            return;
        }
        mario->is_move = false;
    }
}

void event_win(mario *mario)
{
    sfFloatRect mario_rect = SGB(GAME.sprite.mario);
    sfFloatRect flag_rect = SGB(GAME.sprite.flag);

    mario->is_end = (sfFloatRect_intersects(&mario_rect, &flag_rect, NULL)) ? 1
    : 0;
    if (mario->is_end == true)
        colision_1(mario);
}