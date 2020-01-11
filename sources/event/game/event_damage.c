/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** event_damage
*/

#include "runner.h"

void event_damage(mario *mario)
{
    static int i = 0;

    if (mario->player.health == false) {
        event_loose(mario);
    }
    sfSprite_setScale(GAME.sprite.mario, (sfVector2f){.107,
    sfSprite_getScale(GAME.sprite.mario).y - .0015});
    sfSprite_setPosition(GAME.sprite.mario, (sfVector2f){
    sfSprite_getPosition(GAME.sprite.mario).x,
    sfSprite_getPosition(GAME.sprite.mario).y + .9});
    mario->player.health = false;
    ++i;
}