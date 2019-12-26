/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** event_key
*/

#include "runner.h"

void event_jump(mario *mario)
{
    sfVector2f pos;
    static float jump = 0;
    static _Bool up = true;
    pos.y = sfSprite_getPosition(GAME.sprite.mario).y;
    pos.x = sfSprite_getPosition(GAME.sprite.mario).x;

    if (up == true) {
        jump += 1;
        pos.y -= jump;
        printf("%f\n", jump);
        (jump >= 14) ? (up = false, jump = 0) : 0;
    } else {
        jump += 1;
        pos.y += jump;
    }
    if (jump == 15) {
        jump = 0;
        up = true;
        mario->jump = 0;
        return;
    }
    sfSprite_setPosition(GAME.sprite.mario, pos);
}