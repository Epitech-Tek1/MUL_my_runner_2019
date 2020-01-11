/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** colision_ennemies
*/

#include "runner.h"

#define _ GAME.sprite

static void colision_2(mario *mario)
{

}

static void colision_1(mario *mario, float *x, float *y)
{
    sfFloatRect mario_rect = SGB(_.mario);

    for (int i = 0; i != 3; ++i)
        if (sfFloatRect_contains(&mario_rect, x[i] / 2, y[i] / 2)) {
            sfMusic_play(GAME.sounds.hit);
            event_damage(mario);
        }
}

void colision_ennemies(mario *mario)
{
    float x[] = {SGB(_.goomba).left + SGB(_.goomba).width,
    SGB(_.goomba2).left + SGB(_.goomba2).width,
    SGB(_.goomba3).left + SGB(_.goomba3).width,
    SGB(_.goomba4).left + SGB(_.goomba4).width};
    float y[] = {SGB(_.goomba).top + SGB(_.goomba).height,
    SGB(_.goomba2).top + SGB(_.goomba2).height,
    SGB(_.goomba3).top + SGB(_.goomba3).height,
    SGB(_.goomba4).top + SGB(_.goomba4).height};
    colision_1(mario, x, y);
}