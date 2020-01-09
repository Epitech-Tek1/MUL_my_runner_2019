/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** colision_mountain
*/

#include "runner.h"

static void colision_2(mario *mario)
{
    sfFloatRect mario_rect = SGB(GAME.sprite.mario);
    sfFloatRect mount_rect4 = RecGB(GAME._colision.mountain4);
    sfFloatRect mount_rect5 = RecGB(GAME._colision.mountain5);
    sfFloatRect mount_rect6 = RecGB(GAME._colision.mountain6);

    if (sfFloatRect_intersects(&mario_rect, &mount_rect4, NULL))
        smove(GAME.sprite.mario, (sfVector2f){0, -2.4});
    if (sfFloatRect_intersects(&mario_rect, &mount_rect5, NULL))
        mario->jump = true;
    if (sfFloatRect_intersects(&mario_rect, &mount_rect6, NULL))
        SetPos(GAME.sprite.mario, (sfVector2f){150, mount_rect6.top -
        mario_rect.height});
    if (mario->jump == false && sfFloatRect_intersects(&mario_rect,
    &mount_rect4, NULL) == 0)
        mario->jump = 2;
}

static void colision_1(mario *mario)
{
    sfFloatRect mario_rect = SGB(GAME.sprite.mario);
    sfFloatRect ground = RecGB(GAME._colision.ground);
    sfFloatRect mount_rect = RecGB(GAME._colision.mountain);
    sfFloatRect mount_rect2 = RecGB(GAME._colision.mountain2);
    sfFloatRect mount_rect3 = RecGB(GAME._colision.mountain3);

    if (sfFloatRect_intersects(&mario_rect, &ground, NULL))
        SetPos(GAME.sprite.mario, (sfVector2f){150, ground.top -
        mario_rect.height});
    if (sfFloatRect_intersects(&mario_rect, &mount_rect2, NULL))
        mario->jump = true;
    if (sfFloatRect_intersects(&mario_rect, &mount_rect, NULL))
        SetPos(GAME.sprite.mario, (sfVector2f){150, mount_rect.top -
        mario_rect.height});
    if (sfFloatRect_intersects(&mario_rect, &mount_rect3, NULL))
        SetPos(GAME.sprite.mario, (sfVector2f){150, mount_rect3.top -
        mario_rect.height});
}

void colision_mountain(mario *mario)
{
    colision_1(mario);
    colision_2(mario);
}