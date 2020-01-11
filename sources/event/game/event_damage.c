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
    static _Bool try = true;

    if (mario->player.health == false && i > 1000) {
        sfRenderWindow_destroy(WINDOW.window);
        free(mario);
        exit(EXIT_SUCCESS);
    }
    if (try == true) {
        sfMusic_play(GAME.sounds.hit);
        try = false;
    }
    sfSprite_setScale(GAME.sprite.mario, (sfVector2f){.107,
    sfSprite_getScale(GAME.sprite.mario).y - .0015});
    sfSprite_setPosition(GAME.sprite.mario, (sfVector2f){
    sfSprite_getPosition(GAME.sprite.mario).x,
    sfSprite_getPosition(GAME.sprite.mario).y + .9});
    mario->player.health = false;
    ++i;
}