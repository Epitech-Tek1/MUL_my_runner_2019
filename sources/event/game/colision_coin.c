/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** colision_coin
*/

#include "runner.h"

#define _ GAME.sprite

static void colision_1(mario *mario, sfFloatRect *r_arr, char **s_arr,
sfFloatRect mario_rect)
{
    for (int i = 0; i != 23; ++i)
        if (sfFloatRect_intersects(&mario_rect, &r_arr[i], NULL)) {
            SetPos((sfSprite *)s_arr[i], (sfVector2f){20000, 0});
            mario->score++;
            sfMusic_play(GAME.sounds.coin);
        }
}

void colision_coin(mario *mario)
{
    sfFloatRect mario_rect = SGB(_.mario);
    sfFloatRect rect_array[] = {SGB(_.coin), SGB(_.coin2),
    SGB(_.coin3), SGB(_.coin4), SGB(_.coin5), SGB(_.coin7), SGB(_.coin8),
    SGB(_.coin9), SGB(_.coin10), SGB(_.coin11), SGB(_.coin12),
    SGB(_.coin13), SGB(_.coin14), SGB(_.coin15), SGB(_.coin16), SGB(_.coin17),
    SGB(_.coin18), SGB(_.coin19), SGB(_.coin20), SGB(_.coin21), SGB(_.coin22),
    SGB(_.coin23)};
    char *sprite_array[] = {(char *)_.coin, (char *)_.coin2,
    (char *)_.coin3, (char *)_.coin4, (char *)_.coin5, (char *)_.coin7,
    (char *)_.coin8, (char *)_.coin9, (char *)_.coin10, (char *)_.coin11,
    (char *)_.coin12, (char *)_.coin13, (char *)_.coin14, (char *)_.coin15,
    (char *)_.coin16, (char *)_.coin17, (char *)_.coin18, (char *)_.coin19,
    (char *)_.coin20, (char *)_.coin21, (char *)_.coin22, (char *)_.coin23};

    colision_1(mario, rect_array, sprite_array, mario_rect);
}