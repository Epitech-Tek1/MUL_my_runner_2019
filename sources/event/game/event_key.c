/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** event_key
*/

#include "runner.h"

void event_fall(mario_t *mario)
{
    event_mario(mario);
    sfSprite_move(GAME.sprite.mario, (sfVector2f){0, 9});
}

void event_jump(mario_t *mario)
{
    static int jump = -15;

    if (jump < 14) {
        jump += 1;
        sfSprite_move(GAME.sprite.mario, (sfVector2f){0, jump});
    }
    if (jump == 14) {
        jump = -15 ;
        mario->jump = 0;
    }
}