/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** event_game
*/

#include "runner.h"

static void paralax(mario *mario)
{
    if (GetPos(GAME.sprite.mg).x == 0)
        SetPos(GAME.sprite.mg2, (sfVector2f){4080, -500});
    if (GetPos(GAME.sprite.mg2).x == 0)
        SetPos(GAME.sprite.mg, (sfVector2f){4080, -500});
    if (GetPos(GAME.sprite.ground).x == 0)
        SetPos(GAME.sprite.ground2, (sfVector2f){6000, -500});
    if (GetPos(GAME.sprite.ground2).x == 0)
        SetPos(GAME.sprite.ground, (sfVector2f){6000, -500});
    if (GetPos(GAME.sprite.back).x == 0)
        SetPos(GAME.sprite.back2, (sfVector2f){15000, 0});
    if (GetPos(GAME.sprite.back2).x == 0)
        SetPos(GAME.sprite.back, (sfVector2f){15000, 0});
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

void move(mario *mario)
{
    smove(GAME.sprite.ground, (sfVector2f){-6, 0});
    move_2(mario);
    smove(GAME.sprite.ground2, (sfVector2f){-6, 0});
    smove(GAME.sprite.coin, (sfVector2f){-6, 0});
    smove(GAME.sprite.coin2, (sfVector2f){-6, 0});
    smove(GAME.sprite.coin3, (sfVector2f){-6, 0});
    smove(GAME.sprite.coin4, (sfVector2f){-6, 0});
    smove(GAME.sprite.coin5, (sfVector2f){-6, 0});
    smove(GAME.sprite.coin7, (sfVector2f){-6, 0});
    smove(GAME.sprite.coin8, (sfVector2f){-6, 0});
    smove(GAME.sprite.coin9, (sfVector2f){-6, 0});
    smove(GAME.sprite.coin10, (sfVector2f){-6, 0});
    smove(GAME.sprite.quest, (sfVector2f){-6, 0});
    smove(GAME.sprite.quest2, (sfVector2f){-6, 0});
    smove(GAME.sprite.mg, (sfVector2f){-3, 0});
    smove(GAME.sprite.mg2, (sfVector2f){-3, 0});
    smove(GAME.sprite.back, (sfVector2f){-1, 0});
    smove(GAME.sprite.back2, (sfVector2f){-1, 0});
    smove(GAME.sprite.goomba, (sfVector2f){-6.7, 0});
    paralax(mario);
}

void event_game(mario *mario)
{
    colision_mountain(mario);
    colision_coin(mario);
    colision_ennemies(mario);
    move(mario);
}