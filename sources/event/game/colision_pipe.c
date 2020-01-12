/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** colision_pipe
*/

#include "runner.h"

void colision_pipe(mario *mario)
{
    sfFloatRect mario_rect = GETGB(GAME.sprite.mario);
    sfFloatRect pipe_top = RecGB(GAME._colision.pipe_top);
    sfFloatRect pipe_left = RecGB(GAME._colision.pipe_left);

    if (RECI(&mario_rect, &pipe_left, NULL))
        smove(GAME.sprite.mario, (sfVector2f){-6, 0});
    if (sfFloatRect_intersects(&mario_rect, &pipe_top, NULL))
        SETP(GAME.sprite.mario, (sfVector2f){
        GETP(GAME.sprite.mario).x, pipe_top.top - mario_rect.height});
}