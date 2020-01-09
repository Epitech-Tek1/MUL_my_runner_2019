/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** colision_ennemies
*/

#include "runner.h"

static void colision_1(mario *mario)
{

}

static void colision_1(mario *mario)
{
    sfFloatRect goomba_rect = SGB(GAME.sprite.goomba);

    if (sfFloatRect_intersects(&mario_rect, &goomba_rect, NULL))
        (event_damage(mario));
}

void colision_ennemies(mario *mario)
{
    colision_1(mario);
    colision_2(mario);
}