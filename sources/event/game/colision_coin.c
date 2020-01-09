/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** colision_coin
*/

#include "runner.h"

static void colision_1(mario *mario)
{

}

static void colision_2(mario *mario)
{
    sfFloatRect mario_rect = SGB(GAME.sprite.mario);
    sfFloatRect coin_rect = SGB(GAME.sprite.coin);
    sfFloatRect coin_rect2 = SGB(GAME.sprite.coin2);
    sfFloatRect coin_rect3 = SGB(GAME.sprite.coin3);
    sfFloatRect coin_rect4 = SGB(GAME.sprite.coin4);
    sfFloatRect coin_rect5 = SGB(GAME.sprite.coin5);
    sfVector2f disp = {-100, 0};

    if (sfFloatRect_contains(&mario_rect, (cr_x / 1.7), (cr_y / 1.7)))
        mario->score++, SetPos(GAME.sprite.coin, disp);
    if (sfFloatRect_contains(&mario_rect, (cr2_x / 1.7), (cr2_y / 1.7)))
        mario->score++, SetPos(GAME.sprite.coin2, disp);
    if (sfFloatRect_contains(&mario_rect, (cr3_x / 1.7), (cr3_y / 1.7)))
        mario->score++, SetPos(GAME.sprite.coin3, disp);
    if (sfFloatRect_contains(&mario_rect, (cr4_x / 1.7), (cr4_y / 1.7)))
        mario->score++, SetPos(GAME.sprite.coin4, disp);
    if (sfFloatRect_contains(&mario_rect, (cr5_x / 1.7), (cr5_y / 1.7)))
        mario->score++, SetPos(GAME.sprite.coin5, disp);
}

void colision_coin(mario *mario)
{
    colision_1(mario);
    colision_2(mario);
}