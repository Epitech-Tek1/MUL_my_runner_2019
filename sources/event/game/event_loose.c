/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** event_loose
*/

#include "runner.h"

#define clock GAME._clock.loose_seconds

void event_loose(mario_t *mario)
{
    if (GAME.sounds.playe_loose == false) {
        sfMusic_stop(GAME.sounds.lvl);
        sfMusic_play(GAME.sounds.death);
        sfClock_restart(GAME._clock.loose);
        mario->is_move = false;
        GAME.sounds.playe_loose = true;
    }
    if (GETS(GAME.sprite.bowser).x > 1)
        sfSprite_setScale(GAME.sprite.bowser, (sfVector2f){
        GETS(GAME.sprite.bowser).x - .2, GETS(GAME.sprite.bowser).y - .2});
    GAME._clock.loose_time = sfClock_getElapsedTime(GAME._clock.loose);
    clock = GAME._clock.loose_time.microseconds / T;
    if (GETS(GAME.sprite.bowser).x <= 1 && clock >= 2.5) {
        sfMusic_stop(GAME.sounds.death);
        reset_game(mario);
    }
}