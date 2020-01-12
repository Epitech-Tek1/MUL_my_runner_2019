/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** display_game
*/

#include "runner.h"

#define _ GAME.sprite

static void call_fct_2(mario_t *mario)
{
    void (*array_fct[])(mario_t *mario, sfSprite *) = {
        quest, champ, coin, goomba
    };
    char *arr[] = {(char *)_.quest, (char *)_.quest2, (char *)_.champ,
    (char *)_.coin10, (char *)_.coin11, (char *)_.coin12, (char *)_.coin13,
    (char *)_.coin14, (char *)_.coin15, (char *)_.coin16, (char *)_.coin17,
    (char *)_.coin18, (char *)_.coin19, (char *)_.coin20, (char *)_.coin21,
    (char *)_.coin22, (char *)_.coin23, (char *)_.coin2, (char *)_.coin3,
    (char *)_.coin4, (char *)_.coin5, (char *)_.coin6, (char *)_.coin7,
    (char *)_.coin8, (char *)_.coin9, (char *)_.coin, (char *)_.goomba3,
    (char *)_.goomba4, (char *)_.goomba, NULL};
    int nbr_fct[] = {0, 0, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 3, 3, 3};

    for (int i = 0; arr[i]; ++i)
        array_fct[nbr_fct[i]](mario, (sfSprite *)arr[i]);
}

static void disp_sprite(mario_t *mario)
{
    char *arr[] = {(char *)_.back, (char *)_.back2, (char *)_.mg, (char *)_.mg2,
    (char *)_.ground, (char *)_.ground2, (char *)_.quest, (char *)_.quest2,
    (char *)_.coin10, (char *)_.coin11, (char *)_.coin12, (char *)_.coin13,
    (char *)_.coin14, (char *)_.coin15, (char *)_.coin16, (char *)_.coin17,
    (char *)_.coin18, (char *)_.coin19, (char *)_.coin20, (char *)_.coin21,
    (char *)_.coin22, (char *)_.coin23, (char *)_.coin2, (char *)_.coin3,
    (char *)_.coin4, (char *)_.coin5, (char *)_.coin6, (char *)_.coin7,
    (char *)_.coin8, (char *)_.coin9, (char *)_.coin, (char *)_.flag,
    (char *)_.goomba3, (char *)_.goomba4, (char *)_.goomba, (char *)_.pipe,
    (char *)_.mario, NULL};

    for (int i = 0; arr[i]; i++)
        sfRenderWindow_drawSprite(WINDOW.window, (sfSprite *)arr[i], NULL);

}

void game_display(mario_t *mario)
{
    event_game(mario);
    call_fct_2(mario);
    DrawRecShape(WINDOW.window, GAME._colision.ground, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain2, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain3, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain4, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountstop, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain5, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.mountain6, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.pipe_top, NULL);
    DrawRecShape(WINDOW.window, GAME._colision.pipe_left, NULL);
    disp_sprite(mario);
}