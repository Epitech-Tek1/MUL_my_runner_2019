/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** event_loose
*/

#include "runner.h"

void event_loose(mario *mario)
{
    if (sfSprite_getPosition(GAME.sprite.mario).x < -130 ||
    mario->player.health == false) {
        if (GAME.catch == true) {
            sfMusic_stop(GAME.sounds.lvl);
            sfMusic_play(GAME.sounds.death);
            GAME.catch = false;
        }
        if (sfSprite_getScale(GAME.sprite.bowser).x >= 1)
            sfSprite_setScale(GAME.sprite.bowser, (sfVector2f)
            {sfSprite_getScale(GAME.sprite.bowser).x - .2,
            sfSprite_getScale(GAME.sprite.bowser).y - .2});
        if (sfSprite_getScale(GAME.sprite.bowser).x <= 1) {
            reset_game(mario);
        }
    }
}