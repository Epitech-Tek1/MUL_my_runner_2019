/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** event_damage
*/

#include "runner.h"

void event_damage(mario_t *mario)
{
    sfMusic_play(GAME.sounds.hit);
    if (mario->player.health == false) {
        mario->is_loose = true;
        event_loose(mario);
    }
    mario->player.health = false;
    SETS(GAME.sprite.mario, (sfVector2f){.1, .1});
}