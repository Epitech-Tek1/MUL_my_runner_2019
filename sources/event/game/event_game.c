/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** event_game
*/

#include "runner.h"

#define _ GAME.sprite
#define __ GAME._colision

static void paralax(mario *mario)
{
    if (GETP(GAME.sprite.mg).x == 0)
        SETP(GAME.sprite.mg2, (sfVector2f){4080, -500});
    if (GETP(GAME.sprite.mg2).x == 0)
        SETP(GAME.sprite.mg, (sfVector2f){4080, -500});
    if (GETP(GAME.sprite.ground).x == 0)
        SETP(GAME.sprite.ground2, (sfVector2f){6000, -500});
    if (GETP(GAME.sprite.ground2).x == 0)
        SETP(GAME.sprite.ground, (sfVector2f){6000, -500});
    if (GETP(GAME.sprite.back).x == 0)
        SETP(GAME.sprite.back2, (sfVector2f){15000, 0});
    if (GETP(GAME.sprite.back2).x == 0)
        SETP(GAME.sprite.back, (sfVector2f){15000, 0});
}

static void move_2(mario *mario)
{
    sfRectangleShape_move(GAME._colision.mountain, (sfVector2f){-6, 0});
    sfRectangleShape_move(GAME._colision.mountain2, (sfVector2f){-6, 0});
    sfRectangleShape_move(GAME._colision.mountain3, (sfVector2f){-6, 0});
    sfRectangleShape_move(GAME._colision.mountain4, (sfVector2f){-6, 0});
    sfRectangleShape_move(GAME._colision.mountain5, (sfVector2f){-6, 0});
    sfRectangleShape_move(GAME._colision.mountain6, (sfVector2f){-6, 0});
}

void move(mario *mario, char **s_arr)
{
    move_2(mario);
    for (int i = 0; s_arr[i]; ++i)
        smove((sfSprite *)s_arr[i], (sfVector2f){-6, 0});
    smove(GAME.sprite.mg, (sfVector2f){-3, 0});
    smove(GAME.sprite.mg2, (sfVector2f){-3, 0});
    smove(GAME.sprite.goomba, (sfVector2f){-6.7, 0});
    smove(GAME.sprite.goomba2, (sfVector2f){-6.7, 0});
    smove(GAME.sprite.goomba3, (sfVector2f){-6.7, 0});
    smove(GAME.sprite.goomba4, (sfVector2f){-6.7, 0});
    paralax(mario);
}

static void always_moved(mario *mario)
{
    smove(GAME.sprite.back, (sfVector2f){-1, 0});
    smove(GAME.sprite.back2, (sfVector2f){-1, 0});
}

void event_game(mario *mario)
{
    char *sprite_array[] = {(char *)_.coin, (char *)_.coin2, (char *)_.coin3,
    (char *)_.coin4, (char *)_.coin5, (char *)_.coin7, (char *)_.coin8,
    (char *)_.coin9, (char *)_.coin10, (char *)_.coin11, (char *)_.coin12,
    (char *)_.coin13, (char *)_.coin14, (char *)_.coin15, (char *)_.coin16,
    (char *)_.coin17, (char *)_.coin18, (char *)_.coin19, (char *)_.coin20,
    (char *)_.coin21, (char *)_.coin22, (char *)_.coin23,(char *)_.ground,
    (char *)_.ground2, (char *)_.quest, (char *)_.quest2, (char *)_.pipe,
    (char *)_.flag, (char *)__.pipe_top, (char *)__.pipe_left, (char *)__.ground
    , (char *)__.mountstop, (char *)_.champ, '\0'};

    colision_mountain(mario);
    colision_coin(mario);
    colision_ennemies(mario);
    colision_pipe(mario);
    colision_quest(mario);
    always_moved(mario);
    if (mario->is_loose == true || GETP(GAME.sprite.mario).x < -80)
        event_loose(mario);
    if (mario->is_move == true)
        move(mario, sprite_array);
}