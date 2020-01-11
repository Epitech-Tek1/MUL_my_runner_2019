/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** colision_ennemies
*/

#include "runner.h"

#define _ GAME.sprite
#define set_org_x r_arr[i].left + r_arr[i].width / 2
#define set_prg_y r_arr[i].top + r_arr[i].height / 2
#define clock GAME._clock.colisiong_seconds

static void colision_1(mario *mario, sfFloatRect *r_arr)
{
    sfFloatRect mario_rect = SGB(_.mario);

    GAME._clock.colisiong_time = sfClock_getElapsedTime(GAME._clock.colisiong);
    GAME._clock.colisiong_seconds = GAME._clock.colisiong_time.microseconds / T;
    for (int i = 0; i != 3; ++i)
        if (RECC(&mario_rect, set_org_x, set_prg_y) && clock >= .5) {
            sfClock_restart(GAME._clock.colisiong);
            event_damage(mario);
        }
}

void colision_ennemies(mario *mario)
{
    sfFloatRect rect_array[] = {SGB(_.goomba), SGB(_.goomba2), SGB(_.goomba3),
    SGB(_.goomba4)};
    colision_1(mario, rect_array);
}